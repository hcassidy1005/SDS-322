        program fortran
        implicit none

        integer :: i, x = 0, p, q, r, n = 1
        real:: avg
        logical :: prime = .true.
        integer, dimension(10000) :: A

        do p = 2, 104729
                prime = primeTest(p)
                if (prime == .true.) then
                        do q = (p+1), 200000
                                prime = primeTest(q)
                                if (prime ==  .true.) then
                                        r = p + (p-q)
                                        prime = primeTest(r)
                                        if (prime == .true.) then
                                               print *,p, ",",  q-p,"," 
                                                exit
                                        end if
                                end if
                        end do
                end if
        end do

        
          
        contains
        logical function primeTest(x)
        implicit none
                integer :: i, x
                primeTest = .TRUE.
                do i = 2, x/2
                        if (mod(x,i) == 0) then
                                primeTest = .False.
                                exit
                        end if
                end do
        end function 
    
        end program  

