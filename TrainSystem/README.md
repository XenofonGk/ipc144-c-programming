# TrainSystem

A console program that draws an ASCII train facing the direction you choose.

Enter a number of cars (0–5) and a direction (`L` or `R`), and it renders an
engine plus that many cars, mirrored to face the way it is travelling.

## Build and run

```bash
gcc -Wall -o trainsystem *.c
./trainsystem
```

```
Enter number of cars (0-5): 3
Enter direction of travel (L|l|R|r): R
      ~ ~ ~ ~ ~ ~
      ______       ________     ________     ________
__|__|__|___T_   |[][]    |   |[][]    |   |[][]    |
|  ENGINE  __|>>-|________|--|________|--|________|-
  O-OO-OO-O        o-oo-o       o-oo-o       o-oo-o
```

## Notes

The drawing is built row by row rather than as one block of text, because the
engine and the cars have different widths and the whole layout mirrors when the
train faces left — the smoke trail has to start from the opposite end, and the
couplings between cars point the other way.

Input is validated in a loop: a car count outside 0–5, or a direction that is
not `L` or `R` in either case, re-prompts rather than drawing something wrong.

This is a small exercise in string layout and input handling, not a simulation —
for actual train logic (weight limits, coupling rules, safety validation) see
[train-yard-manager](https://github.com/XenofonGk/train-yard-manager).
