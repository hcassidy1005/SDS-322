program assign 

implicit none

real :: x, y 
integer :: i,j 

x = 3.4
x = 2.* x
y = 4.*x*x + 2.5*x - 3.4 

i = 4 
i = 2*i 
j = 2*i*i + 4*i - 2

y = i * x 
y = real(i) * x

end program assign 
