# M02-Programming-Assignment-1-
# Pig Latin Converter using Linked List (M02 Programming Assignment)

## Program description

This program prompts the user to input a string (one or more words) and outputs the Pig Latin form of each word.

Pig Latin rules implemented:

- If a word begins with a vowel, add `way` to the end.
- If a word begins with a consonant, rotate letters from the front to the back until the first letter is a vowel, then add `ay`.
- The program stores each word as a **linked list of characters** and uses a `rotate()` function to remove the first node and append it to the end.

The program demonstrates:
- Singly linked list of characters
- Node rotation
- Basic string processing

## Inputs and outputs

- **Input:** A line of text from the user (one or more words separated by spaces).
- **Output:** The Pig Latin version of the input, with each word converted individually.

Example:

```text
Input:  string
Output: ingstray
