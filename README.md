# My 42 minitalk

## Description
Minitalk is a project from 42 School that involves implementing a communication system between a server and a client using Unix signals (SIGUSR1 and SIGUSR2). The goal is to create simple communication between two processes, where the client sends a message, and the server displays it.

## Installation

Clone this repository:
```
git clone https://github.com/your-account/minitalk.git
```
Compile the project:
```
make
```
## Usage

Run the server:

```
./server
```
This will display the server's process ID (PID).

Run the client with the server's PID and the message to send:

```
./client <SERVER_PID> "Your message"
```
The server will then display the message.
