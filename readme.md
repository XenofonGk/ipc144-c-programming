# C Programming Projects
 
![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)
![IPC144](https://img.shields.io/badge/IPC144-Intro%20to%20C-orange)
 
A collection of C projects demonstrating procedural programming fundamentals — structs, file I/O, dynamic data processing, input validation, and ASCII rendering.
 
---
 
## 📂 Project 2: Baby Name Finder
 
A data analysis tool that processes over 180,000 baby name records spanning 110 years of US data (1914–2023). Reads from CSV files and provides interactive search, ranking, and visualization features.
 
### Features
- **Name Search** — find how many babies had a given name each year, with male/female/combined totals
- **Top 5 Rankings** — find the 5 most popular names for any given year, split by gender
- **ASCII Histogram** — visualize a name's popularity trend across 5-year cohorts from 1914 to 2023
- **CSV Parsing** — loads two separate datasets (female + male) and merges them into a unified record array
 
### Technical Implementation
- `struct BabyNameRecord` — models each record with year, name, and frequency
- `loadData()` — parses CSV files with `fopen`/`fscanf` into a flat array of up to 180,000 records
- `writeCombinedFile()` — merges both datasets and writes to a combined output file
- Case-insensitive search via `convertToUppercase()` before string comparison
- Input validation loop for year range (1914–2023) and menu choices
 
### How to Run
```bash
cd Project2
gcc -Wall project.c projectmain.c -o babynames
./babynames
```
 
Requires `femalebabynames.csv` and `malebabynames.csv` in the same directory.
 
---
 
## 📂 Project 1: Train Car ASCII Renderer
 
An interactive ASCII art generator that draws a train based on user input.
 
### Features
- User specifies number of train cars and direction (left or right)
- Renders a formatted ASCII train to the terminal
 
### Technical Implementation
- Input validation for number of cars and direction character
- Modular design — `getNumTrainCars()`, `getDirection()`, `drawTrain()` in separate functions
- Header/source file separation with function prototypes in `project.h`
 
### How to Run
```bash
cd Project1
gcc -Wall project.c projectmain.c -o train
./train
```
 
---
 
*Developed by Xenofon Gkioka 