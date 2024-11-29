# My 42 Minitalk

## Description

Minitalk is a project from 42 School that focuses on interprocess communication using Unix signals (SIGUSR1 and SIGUSR2). The goal is to create a simple communication system between two processes: a client and a server. The client sends a message to the server, which then processes and displays it.
## Installation

Clone this repository:
```
git clone https://github.com/your-account/minitalk.git
```
Compile the project:
```
make
```
This will generate two executables: server and client.
## Usage

Run the server:
```
./server
```
This will display the server's Process ID (PID), which is required by the client to send messages.

Run the client with the server's PID and the message to send:
```
./client <SERVER_PID> "Your message"
```
The server will then display the received message.
## Example

Start the server:
```
./server
```
Output:
```
Server PID: 12345
```
Send a message from the client:
```
./client 12345 "Hello, Minitalk!"
```
Server output:
```
Received message: Hello, Minitalk!
```
