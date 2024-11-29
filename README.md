# My 42 Minitalk

## Description

Minitalk is a project from 42 School that introduces interprocess communication through the implementation of a client-server system using Unix signals (SIGUSR1 and SIGUSR2). The goal is to establish a simple yet reliable method of transmitting messages between two processes.

The server waits for signals from a client, decodes the binary data sent, and reconstructs the original message to display it. The client, on the other hand, converts a text message into a series of binary signals and sends them to the server using its Process ID (PID).

The project includes:

  - Using Unix signals to communicate between processes.
  - Encoding and decoding data as binary using bitwise operations.
  - Ensuring synchronization to transfer messages reliably.
  - Managing edge cases like invalid PIDs or interruptions.

Minitalk offers an opportunity to explore system-level programming concepts while building a deeper understanding of signals and interprocess communication in Unix.
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
