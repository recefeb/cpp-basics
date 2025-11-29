# Perfect Number Checker

A simple C++ program that determines whether a given number is a perfect number.

## What is a Perfect Number?

A perfect number is a positive integer that equals the sum of its proper divisors (all divisors excluding the number itself).

**Examples:**
- **6** is a perfect number: 1 + 2 + 3 = 6
- **28** is a perfect number: 1 + 2 + 4 + 7 + 14 = 28
- **496** is a perfect number: 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248 = 496

## Algorithm

1. Read an integer from the user
2. Initialize a sum variable to 0
3. Loop from 1 to number/2:
   - Check if the current number divides the input evenly
   - If yes, add it to the sum
4. Compare the sum with the original number:
   - If equal: the number is perfect
   - If not equal: the number is not perfect

## How to Compile and Run

### Compilation
```bash
g++ perfect_number_checker.cpp -o perfect_number_checker
```

### Execution
```bash
./perfect_number_checker
```

## Usage Example

```
Please enter a number: 6
6 is a perfect number
```

```
Please enter a number: 10
10 is not a perfect number
```

## Time Complexity

- **O(n/2)** which simplifies to **O(n)** where n is the input number

## Space Complexity

- **O(1)** - uses only a constant amount of extra space

## Notes

- The program only checks up to `number/2` because no proper divisor of a number can be greater than half of that number
- This is a brute-force approach suitable for small to medium-sized numbers
- For very large numbers, more efficient algorithms exist

## Known Perfect Numbers

The first few perfect numbers are:
- 6
- 28
- 496
- 8128
- 33550336
