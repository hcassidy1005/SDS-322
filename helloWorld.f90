!Hello World program 
program hello
implicit none

! must declare all your variable up at the top 
integer :: year, day 
real :: age 
real, parameter :: ret_age = 62. ! this can't be changed

! Assign variables 
year = 2018
day = 10
age = 21.51

!output 
print *, 'Hello World... one third is ', (1.0/3.0)
print *, 'Year: ', year 
print *, 'Day: ' , day 
print *, 'Age: ', age 

end program hello
