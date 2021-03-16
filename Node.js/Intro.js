// File name for NodeJs: app.js / server.js

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
    console.log(req);
    
    // Shuts the server -> process.exit();
});

// NodeJs will listen for incoming requests
server.listen(3000);
