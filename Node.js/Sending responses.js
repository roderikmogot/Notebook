/* File name for NodeJs: app.js / server.js */

/*
    http varies
    require -> path or module
 */
const http = require('http');

/* Anonymous Function
    (req, res) => {

    }
*/

const server  = http.createServer((req, res) => {
    console.log(req.url, req.method, req.headers);

    // Attach a header to response, where we pass a HTML content
    res.setHeader('Content-Type', 'text/html');

    // Write data to response
    res.write('<html>');
    res.write('<head><title>My First page!</title></head>');
    res.write('<body>Hello!</body>');
    res.write('</html>');

    // End of response, cannot write anymore
    res.end();

});

// NodeJs will listen for incoming requests
server.listen(3000);
