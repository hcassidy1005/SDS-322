program exercise5 
implicit none

character (len = 10) :: yourName 
real, parameter :: pi = 3.14159265359
real :: a, b, c, d
integer :: i  

print *, "Enter your name: " 
read *, yourName 
print *, "Enter three numbers: " 
read *, a, b, c 

print *, "Hello ", yourname 
print *, "Volume of a sphere with radius" , a, ":", (4/3) * pi * a**3.0 
print *, "Volume of a cube with length" , a , "height" ,b, "width" , c, ":", a*b*c

d = (a*b*c) /7.0 
i = int(d) 
print *, "d:" , d
print *, "d as an integer:" , i 

end program exercise5
