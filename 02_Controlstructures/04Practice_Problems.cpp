/* Practice Problems

1. DistinctValues:
Write a function that takes a three-digit integer and determines if all of its digits are distinct.

2. MiddleDigit:
Write a function that accepts a three-digit integer and identifies if its middle digit is the largest, smallest, or neither when compared to the other two digits.

3. CanBeDivided:
Given an integer amount, write a function to check if it can be formed using only banknotes of denominations 100, 500, and 2000.

4. PerfectSquare:
Write a function to determine if a given non-negative integer is a perfect square, without using any built-in library functions like sqrt.

5. FizzBuzz:
Write a function that takes an integer and prints "Fizz" if it's divisible by 3, "Buzz" if it's divisible by 5, and "FizzBuzz" if it's divisible by both. Otherwise, it should print the number itself.

6. MedianOfThree:
Write a function that returns the median value from a set of three distinct integers.

7. AmPm:
Write a function that converts a given time from a 24-hour format to a 12-hour format, appending "AM" or "PM" accordingly.

8. Password:
Write a function to validate a password. A valid password must be at least 8 characters long and contain at least one numeric digit.

9. Point_on_axis:
Given a point with coordinates (x, y), write a function to determine if it lies on the origin, the X-axis, the Y-axis, or within a quadrant.

10. isPythagoreanTriplet:
Write a function that takes three integers and returns true if they form a Pythagorean triplet (a² + b² = c²), and false otherwise.

11. findClockAngle:
Write a function that calculates and returns the smaller angle (in degrees) between the hour and minute hands on an analog clock for a given time.

12. arithmeticProgression:
Write a function to determine if three given integers can form an arithmetic progression.

13. sumofDigits_ProductofDigits:
Write a function that takes an integer, calculates the sum and product of its digits, and then determines if the sum is greater than the product.

*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;


void DistinctValues(int num){
    num = abs(num);
    int a, b, c;
    if(100<=num && num<=999){
        a = num % 10;
        num /= 10;
        b = num % 10;
        num /= 10;
        c = num % 10;

        if (a!=b && b!=c && a!=c)
        {
            cout << "All digits are distinct." << endl;
        }
        else
        {
            cout << "All digits are not distinct." << endl;
        }

    } else {
        cout << "Please enter a three-digit number." << endl;
    }
}

void MiddleDigit(int num){
    num = abs(num);
    int a, b, c;
    if(100<=num && num<=999){
        a = num % 10;
        num /= 10;
        b = num % 10;
        num /= 10;
        c = num % 10;

        if (b>a && b>c)
        {
            cout << "The middle digit is the largest digit!" << endl;
        }
        else if (b<a && b<c)
        {
            cout << "The middle digit is the smallest digit!" << endl;
        }
        else if(b==a && b==c){
            cout << "All digits are equal!" << endl;
        }
        else{
            cout << "The middle digit is neither the largest nor the smallest digit!" << endl;
        }
    } else {
        cout << "Please enter a three-digit number." << endl;
    }  
}

void CanBeDivided(int amount){
if (amount<100 || amount%100!=0)
    {
        cout << "Not possible to divide into 2000,500 and 100 notes.";
    }
    else{
        cout << "Possible to evenly divide it into 2000,500 and 100 notes.";
    }
}

bool PerfectSquare(int num){
    if(num==0 || num==1){
        return true;
    }else{
        for (long i = 0; i < num; i++)
        {
            if (i*i==num)
            {
                
                return true;
            }
        }
        
    }
    return false;
}

void FizzBuzz(int num){
    if(num % 3 == 0 && num % 5 == 0){
        cout << "FizzBuzz";
    }else if (num % 3 == 0)
    {
        cout << "Fizz";
    }else if (num % 5 == 0)
    {
        cout << "Buzz";
    }
    else
        cout << num;
}

void MedianOfThree(int x,int y,int z){
    if ((x>=y && x<=z) || (x<=y && x>=z))
    {
        cout << "Number " << x << " is Median.";
    }
    else if ((y >= x && y <= z) || (y <= x && y >= z))
    {
        cout << "Number " << y << " is Median.";
    }
    else
    {
        cout << "Number " << z << " is Median.";
    }
}

void AmPm(float hrs){
    if (0<=hrs && hrs<=12)
    {
        cout << "Its " << hrs << " AM";
    }
    else if (12<=hrs && hrs<=24)
    {
        cout << "Its " << hrs << " PM";
    }
    else
        cout << "Invalid input";
}

void Password(string str){
if (str.length()>=8)
{
    if (any_of(str.begin(),str.end(),::isdigit ))
    {
        cout << "Ok! Password";
    }
    else
        cout << "Use strong password(use combinations of words and numbers!)";
}
else
    cout << "Length is too short!";
}

void Point_on_axis(int x,int y){
    if(x==0 && y==0){
        cout << "Points are on origin!";
    }
    else if (x==0)
    {
        cout << "On Y-axis";
    }
    else if (y==0)
    {
        cout << "On X-axis";
    }
    else
        cout << "On quadrant!";
}

void isPythagoreanTriplet(int x,int y,int z){
    std::vector<int> arr = {x, y, z};
    sort(arr.begin(), arr.end());
    
    if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) {
        cout << "Yes, it is a Pythagorean Triplet." << endl;
    } else {
        cout << "No, it is not a Pythagorean Triplet." << endl;
    }
}

double findClockAngle(int hour, int minute) {
    if (hour == 12) {
        hour = 0;
    }
    if (minute == 60) {
        minute = 0;
        hour += 1; // e.g., 2:60 is 3:00
    }

    // Minute hand moves 6 degrees per minute.
    double minute_angle = minute * 6.0;
    
    // Hour hand moves 30 degrees per hour + 0.5 degrees per minute.
    double hour_angle = (hour * 30.0) + (minute * 0.5);

    double angle = abs(hour_angle - minute_angle);

    return min(angle, 360.0 - angle);
}

void arithmeticProgression(int a, int b, int c){
    std::vector<int> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    if(2*arr[1] == arr[0] + arr[2]){
        cout << "The numbers form an arithmetic progression." << endl;
    } else {
        cout << "The numbers do not form an arithmetic progression." << endl;
    }
}

void sumofDigits_ProductofDigits(int num) {
    
    if (num == 0) {
        cout << "For the number 0, the sum (0) and product (0) are equal." << endl;
        return; 
    }
    int n = abs(num);
    
    int sum = 0;
    long int product = 1;
    int digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    cout << "For number " << num << ", Sum = " << sum << ", Product = " << product << endl;

    if (sum > product) {
        cout << "Sum of digits is greater than the product of digits." << endl;
    } else {
        cout << "Sum is not greater than the product of the digits." << endl;
    }
}

int main() {
    
// --- DistinctValues ---
    // int num_distinct;
    // cout << "Enter a three-digit number for DistinctValues: ";
    // cin >> num_distinct;
    // DistinctValues(num_distinct);

    // --- MiddleDigit ---
    // int num_middle;
    // cout << "Enter a three-digit number for MiddleDigit: ";
    // cin >> num_middle;
    // MiddleDigit(num_middle);
    
    // --- CanBeDivided ---
    // int amount;
    // cout << "Enter an amount for CanBeDivided: ";
    // cin >> amount;
    // CanBeDivided(amount);
    
    // --- PerfectSquare ---
    // int num_sq;
    // cout << "Enter a number for PerfectSquare check: ";
    // cin >> num_sq;
    // if(PerfectSquare(num_sq))
    //     cout << "Perfect Square" << endl;
    // else
    //     cout << "Not a Perfect Square" << endl;
        
    // --- FizzBuzz ---
    // int num_fb;
    // cout << "Enter a number for FizzBuzz: ";
    // cin >> num_fb;
    // FizzBuzz(num_fb);
    
    // --- MedianOfThree ---
    // int med_x, med_y, med_z;
    // cout << "Enter three numbers for MedianOfThree (x y z): ";
    // cin >> med_x >> med_y >> med_z;
    // MedianOfThree(med_x, med_y, med_z);
    
    // --- AmPm ---
    // float hrs;
    // cout << "Enter hours (0-24) for AmPm: ";
    // cin >> hrs;
    // AmPm(hrs);
    
    // --- Password ---
    // string str_pass;
    // cout << "Enter a password string: ";
    // cin >> str_pass;
    // Password(str_pass);

    // --- Point_on_axis ---
    // int axis_x, axis_y;
    // cout << "Enter coordinates for Point_on_axis (x y): ";
    // cin >> axis_x >> axis_y;
    // Point_on_axis(axis_x, axis_y);

    // --- isPythagoreanTriplet ---
    // int pt_x, pt_y, pt_z;
    // cout << "Enter three numbers for isPythagoreanTriplet (x y z): ";
    // cin >> pt_x >> pt_y >> pt_z;
    // isPythagoreanTriplet(pt_x, pt_y, pt_z);
    
    // --- findClockAngle ---
    // int h, m;
    // cout << "Enter hour: ";
    // cin >> h;
    // cout << "Enter minute: ";
    // cin >> m;
    // cout << "The smaller angle is: " << findClockAngle(h, m) << " degrees." << endl;
    
    // --- arithmeticProgression ---
    // int ap_a, ap_b, ap_c;
    // cout << "Enter three numbers for arithmeticProgression (a b c): ";
    // cin >> ap_a >> ap_b >> ap_c;
    // arithmeticProgression(ap_a, ap_b, ap_c);

    // --- Test sumofDigits_ProductofDigits ---
    int num_sum_prod;
    cout << "Enter a number for sum/product of digits: ";
    cin >> num_sum_prod;
    sumofDigits_ProductofDigits(num_sum_prod);
    
    return 0;
}