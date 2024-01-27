#This program checks whether the specified year is a leap year or a common year.

year = int(input('Enter the year: '))

if year % 4 == 0 and year % 100 != 0 :
     print('Leap Year') # Print leap year when the year is divisible by 4 and not divisible by 100
elif year % 4 != 0 and year % 100 == 0 or year % 400 != 0:
    print('Common Year') # Print common Year when the year is not divisible by 4 and  divisible by 100 or not divisible by 400
else:
    print('Leap Year') # Otherwise Prints out leap year

    