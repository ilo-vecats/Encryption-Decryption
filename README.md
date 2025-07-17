# Encryption-Decryption


This is a simple C++ program that performs text encryption and decryption using a basic XOR cipher. The program allows users to write to a file (like a diary), encrypt the contents using a numeric key, and later decrypt it using the same key.

## Features

- Create a new text file with user input (like a diary)
- Encrypt the contents using XOR cipher with a user-provided key
- Decrypt the encrypted file using the same key
- File I/O handled via standard C++ libraries

## File Structure

- `main.cpp` – Entry point of the program.
- `encode.cpp` – Contains the `encode` class with logic for:
  - Writing text
  - Encrypting file
  - Decrypting file

## How It Works

- The XOR cipher encrypts each character by applying the XOR operation with a given key.
- Decryption uses the **same** key to retrieve original content (since `A XOR B XOR B = A`).

## How to Run

### Step 1: Compile

```bash
g++ -std=c++20 main.cpp encode.cpp -o main
