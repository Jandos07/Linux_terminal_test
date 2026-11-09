# C Console · Battery-Level Exercise

A C input-and-branching exercise that asks for a battery percentage and prints a condition message.

**Focus:** C · Linux terminal  
**Status:** Work in progress

## Repository guide

| Path | Purpose |
| --- | --- |
| [battery_life.c](battery_life.c) | Input handling and battery-status branches |

## Getting started

Requires a C compiler. To inspect compiler diagnostics and run the exercise on Linux or WSL:

```sh
gcc -Wall -Wextra battery_life.c -o battery_life
./battery_life
```

## Notes

The low-battery branch uses a chained comparison, and invalid-input handling needs review. Treat the messages as exercise output rather than a reliable classifier.
