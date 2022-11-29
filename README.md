# RandomProjects

I'm just adding my beginners projects here, still new to C++ and coding in general.
 For the first project i have for my module 12, i uploaded so i can look at it, and maybe have other people find it helpful. I did my best to explain it. Here is the description.
 
 

    You have been hired as a programmer for Blue Star Electric. The first program you must write generates a form letter to a customer with an overdue account. The letter will appear in the form below with the fields in brackets <> replaced by actual values.
    Letter format:

Dear : <First name> <Last name>

Your account has a balance of $ <balance> with a past-due amount of $<Past Due>. Your last payment was on <Date>. Please pay the past-due amount as soon as possible.

Please ignore this letter if you have already sent payment.

Sincerely,

Blue Star Electric

    Here are the fields and their descriptions:

Field 	Description
First name 	Customer first name.
Last name 	Customer last name.
Balance 	Customer total account balance.
Past-Due 	Customer amount past-due.
Date 	Date of last customer payment.

    Before the letter is printed, your program should ask the user to enter values for the fields listed in the table above. The values should then be inserted into the form
    letter as it is being printed. The program should perform word-wrap, which means the sentences should be adjusted so no word is split between two lines. Additionally, the letter should have ten-character left and right margins.
    Here are the major variables needed:

Variable 	Description
part1...part8 	Eight constant global character arrays that hold portions of the form letter.
firstName 	A character array to hold the customer first name as a null-terminated C-string.
lastName 	A character array to hold the customer last name as a null-terminated C-string.
lastPayment 	A character array to hold the last payment date as a null-terminated C-string.
balance 	A character array to hold the customer account balance as a null-terminated C-string.
pastDue 	A character array to hold the customer past-due balance as a null-terminated C-string.
again 	A character to hold the user's Y or N response when prompted to print another letter.
position 	An integer to hold the printing position since each printed character increments the variable. This variable determines when the end of a line is near.

    The program uses eight constant global character arrays to hold the sections of the form letter that are always the same. The arrays, named part1 through part8, are defined and initialized as follows:

const char part1[] = "Dear ";
const char part2[] = "Our records show that your account has a"
" balance of $";
const char part3[] = " and a past due amount of $";
const char part4[] = "Your last payment was on ";
const char part5[] = "Please pay the past-due amount as soon as possible.\n\n";
const char part6[] = "Please ignore this letter if you have already sent payment.\n";
const char part7[] = "Sincerely,\n\n";
const char part8[] = "Blue Star Electric";

    Note - Some of the arrays are initialized with what appears to be more than one string. Ex: part2. The two strings are actually concatenated into one string. This allows the programmer to easily span multiple lines when initializing character arrays with long strings.

Functions to be used
Function 	Description
main 	Program's main function. Used to call getInfo and printLetter.
getInfo 	Prompt's the user to enter the customer's first name, last name, account balance, past-due amount, and date of last payment.
printLetter 	Controls the printing of the form letter once fields receive input. Calls prinLine.
printLine 	Prints a line of text starting at the current printing position. A word-wrap is performed when near the end of the line. Position variable is also updated.
