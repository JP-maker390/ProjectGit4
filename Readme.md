Readme_Question 4.  
Comments

The program for implementing and analyzing the ConcatRemove() function begins with the declaration of variables that will be used in the program.

Initially, the commands for inputting the strings "s", "t" and the movement value "k" are defined. A test is defined to exemplify the function test. For this, s="efg", t="hij" and k=6 were used;

Next, a test is performed with the ConcatRemove() function.

Then, the program evaluates two functions, the first one will remove the data from s. And then, it will insert the data from t into s, complementing the movements defined in "k".

Function ConcatRemove() 
The ConcatRemove() function analyzes whether it is possible to convert the string s to t using only "k" movements, as requested in the Siemens challenge description. 
The function starts by evaluating whether there is a sequence of equal characters in both strings s and t. It returns the position where different characters occur in both strings.
Based on the pos_diff index value, the amount of string movements that will be necessary is evaluated. For this analysis, character removal and concat are considered.



Function remove_string ()
Removes a string data from the position defined as the function parameter

Function concat_string ()
Concatenates data from string t into s, always at the end of the string, as requested in the problem.

Function Check_string()
Checks whether strings s and t have a sequence of equal elements and returns the position of the string where there is a difference between the elements.




