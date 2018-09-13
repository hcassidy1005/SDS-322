        program array1
        implicit none
        integer :: i 
        integer, dimension(5) :: A = (/ 10, 20, 30, 40, 50/)
        integer, dimension(3) :: k = [1,3, 5]

        print'(i4)', A
        print *, A(k) 

        end program array1 
