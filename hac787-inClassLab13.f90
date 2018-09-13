        program lab13
        implicit none 

        integer :: i, j, k

        do i = 1, 100
                do j = 1, 100
                        do k = 1, 100 
                                if (i**2 + j**2 == k**2) then 
                                        print *, i, j, k
                                end if 
                        end do
                end do 
        end do 

        end program

