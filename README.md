# Cybersecurity Lab Management System

**Student Name:** [Ali Qamber]  
**Student ID:** [26k-2014]  

## Project Description
This C program prototype manages basic laboratory asset and financial data for a university cybersecurity lab. It prompts the user for physical equipment counts and associated costs, calculates individual sub-costs and total financial investment, and formats the results into a standardized cybersecurity lab report.

## Input
- Lab name
- Number of computers
- Number of network devices
- Number of security tools
- Cost per computer
- Cost per network device
- Annual security software cost

## Processing
- `Computer Cost = Number of Computers * Cost per Computer`
- `Network Cost = Number of Network Devices * Cost per Device`
- `Total Lab Investment = Computer Cost + Network Cost + Software Cost`

## Output
Displays a clean, structured laboratory investment summary showing equipment counts, sub-total costs, and total investment.

## How to Compile
You can compile and run this program using any standard C compiler (such as GCC) or an online C compiler:

```bash
gcc cyber_lab.c -o cyber_lab
./cyber_lab
