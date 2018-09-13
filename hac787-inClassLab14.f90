        program random_number_array
        implicit none
        real, dimension(100) :: r
        integer :: i         
        call random_number(r)
                print '(10(f7.2))', (r(i), i =1, 100)

        end program
