const http = require('http');
const fs = require('fs');

const server  = http.createServer((req, res) => {

    const url = req.url;

    const method = req.method;

    if(url === '/'){
        res.write('<html>');
        res.write('<head><title>My First page!</title></head>');
        res.write('<body><form action="/message" method="POST"><input type="text" name="message"><button type="submit">Send</button></form></body>');
        res.write('</html>');
        return res.end();
    }

    // Method is post if === '\' is executed and form has been entered
    if(url === '/message' && method === 'POST'){

        const body = [];

        // Listen to data events
        req.on('data', (chunk) => {
          
            // console.log(chunk);
          
            // Reediting the current body
            body.push(chunk);
        });

        req.on('end',() => {

            // Convert the buffered chunk to string
            const parsedBody = Buffer.concat(body).toString();

            // Split the string after = and get the last message where index is 1
            const message = parsedBody.split('=')[1];

            fs.writeFileSync('message.txt', message);
        });



        // Redirection code
        res.statusCode = 302;

        res.setHeader('Location','/');

        // Code below won't perform
        return res.end();
    }
    res.setHeader('Content-Type', 'text/html');
    res.write('<html>');
    res.write('<head><title>My First page!</title></head>');
    res.write('<body>Hello!</body>');
    res.write('</html>');
    res.end();
});

server.listen(3000);
