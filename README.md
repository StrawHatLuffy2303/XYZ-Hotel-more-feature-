<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>XYZ Hotel Menu System</title>
</head>
<body style="font-family: Arial, sans-serif; line-height: 1.6; margin: 20px;">

<h1 style="color: #333;">XYZ Hotel Menu System</h1>

<p>A console-based menu system for XYZ Hotel, written in C. This program allows users to select food items from a menu, specify the number of plates, and calculate the total cost. The program continues to prompt the user for input until they choose to exit. Once the user decides to exit, the program prints a bill with the total cost and allows the user to pay with cash. The program then calculates the change and breaks it down into individual notes.</p>

<h2 style="color: #333;">Key Features:</h2>
<ul>
  <li><strong>Menu System</strong>: Select from 3 food items: Samosa, Dosa, and Tea</li>
  <li><strong>Order Management</strong>: Specify the number of plates for each item</li>
  <li><strong>Billing System</strong>: Calculate the sub-total and grand total</li>
  <li><strong>Cash Payment</strong>: Pay with cash and receive change</li>
  <li><strong>Change Breakdown</strong>: Change is broken down into individual notes (100, 50, 20, 10, 5, 2, and 1)</li>
</ul>

<h2 style="color: #333;">How to Use:</h2>
<p>There are two ways to run this program:</p>

<h3 style="color: #333;">Command Line:</h3>
<ol>
  <li>Compile the program using a C compiler (e.g. GCC) by running the command <code>gcc xyz_hotel_menu.c -o xyz_hotel_menu</code></li>
  <li>Run the program by running the command <code>./xyz_hotel_menu</code></li>
  <li>Follow the on-screen prompts to select food items and calculate the total cost</li>
  <li>Once you decide to exit, the program will print a bill and allow you to pay with cash</li>
</ol>

<h3 style="color: #333;">IDE:</h3>
<ol>
  <li>Open your preferred IDE (e.g. Visual Studio, IntelliJ IDEA, Eclipse)</li>
  <li>Create a new C project and add the <code>xyz_hotel_menu.c</code> file to the project</li>
  <li>Compile and run the program using the IDE's built-in compiler and debugger</li>
  <li>Follow the on-screen prompts to select food items and calculate the total cost</li>
  <li>Once you decide to exit, the program will print a bill and allow you to pay with cash</li>
</ol>

<h2 style="color: #333;">License:</h2>
<p>This program is released under the MIT License.</p>

<h2 style="color: #333;">Contributing:</h2>
<p>If you'd like to contribute to this project, please fork the repository and submit a pull request.</p>

<h2 style="color: #333;">Example Use Case:</h2>
<pre style="background-color: #eef; padding: 10px; border-radius: 5px; overflow: auto;">
Welcome To XYZ Hotel
Menu:
1 Samosa 20/-
2 Dosa 30/-
3 Tea 10/-
0 Exit and print bill

Enter your Choice: 1
Enter number of plates: 2
 Sub-Total=40.00
Wanna add more food(Y/N)-Y

Welcome To XYZ Hotel
Menu:
1 Samosa 20/-
2 Dosa 30/-
3 Tea 10/-

Enter your Choice: 2
Enter number of plates: 1
 Sub-Total=30.00
Wanna add more food(Y/N)-N

::YOUR BILL::
|   SR.NO.  |   ITEM   |   QTY   |   RATE   |   SUB TOTAL
------------------------------------------------------------------------------------
|    1      |  Samosa  |    2    |  20.00   |   40.00
|    2      |   Dosa   |    1    |  30.00   |   30.00
------------------------------------------------------------------------------------
                     GRAND TOTAL-70.00
Enter the Cash=100
Return=30
100 Notes X 0=0
50 NOTES X 0=0
20 NOTES X 1=20
10 NOTES X 1=10
5 NOTES X 0=0
2 NOTES X 0=0
1 NOTES X 0=0

              T H A N K Y O U!
</pre>

</body>
</html>
