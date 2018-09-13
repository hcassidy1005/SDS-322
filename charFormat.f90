        program charFormat 
        implicit none 
        
        character(len=8) :: n = 'John Doe'
        print '(a1,a8,a1)', '>', n, '<'
        print '(a,a,a)', '>', n, '<'
        print '(a,a4,a)', '>', n, '<'
        print '(a,a5,a)', '>', n, '<'
        print '(a,a6,a)', '>', n, '<'
        print '(a,a7,a)', '>', n, '<'
        print '(a,a9,a)', '>', n, '<'

        end program charFormat 
