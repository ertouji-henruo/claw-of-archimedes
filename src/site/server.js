const express = require('express');
const http = require('http');
const socketIo = require('socket.io');

// Create an Express application
const app = express();
const server = http.createServer(app);
const io = socketIo(server);

// Serve static files from the 'public' directory
app.use(express.static('public'));

// Handle incoming connections from clients
io.on('connection', (socket) => {
    console.log('A client connected:', socket.id);

    // Listen for arm control commands from the client
    socket.on('controlArm', (data) => {
        console.log('Control command received:', data);
        // Here you would add code to control your robotic arm
        // For example, send commands to a microcontroller or another system
    });

    // Handle disconnection
    socket.on('disconnect', () => {
        console.log('Client disconnected:', socket.id);
    });
});

// Serve the main page
app.get('/', (req, res) => {
    res.sendFile(__dirname + '/public/index.html');
});

// Start the server
const PORT = process.env.PORT || 3000;
server.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});
