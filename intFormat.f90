        program intFormat
        implicit none

        integer :: i = 1234, &
         j = 12345678, &
         n = -12345678
        
        real :: pi = 3.14159, &
         p2 = 314.159, &
         pm = -314.159
        
        real :: xp = 123456., &
         xn = -123456., c = 2.99e8
        
        print *, "ints"
        print '(a,i4,a)', 'i=', i, '<' ! i=1234<
        print '(a,i6,a)', 'i=', i, '<' ! i= 1234< Padding with blanks
        print '(a,i8,a)', 'i=', i, '<' ! i= 1234<
        print '(a,i8,a)', 'j=', j, '<' ! j=12345678<
        print '(a,i4,a)', 'j=', j, '<' ! j=****< Number has 8 digits
         ! Format holds only 4
        print '(a,i2,a)', 'i=', i, '<' ! i=**< 4 digits, 2 spaces
        print '(a,i8,a)', 'n=', n, '<' ! n=********< Account for sign
        print '(a,i9,a)', 'n=', n, '<' ! n=-12345678<
        
        print *, "Real"
        print '(a,f7.5,a)', 'pi=',pi,'<' ! pi=3.14159< 1 digit before dot
        print '(a,f6.4,a)', 'pi=',pi,'<' ! pi=3.1416< Rounded
        print '(a,f7.3,a)', 'p2=',p2,'<' ! p2=314.159< 3 digits before dot
        print '(a,f7.5,a)', 'p2=',p2,'<' ! p2=*******<
        print '(a,f9.5,a)', 'p2=',p2,'<' ! p2=314.15900< 3 digits before dot
        print '(a,f7.3,a)', 'pm=',pm,'<' ! pm=*******< 3 digits before dot
        print '(a,f8.3,a)', 'pm=',pm,'<' ! pm=-314.159< 4 digits before dot
        
        print *, "Scientific Notation" 
        print '(a,es11.5,a)', 'xp=',xp,'<' ! xp=1.23456E+05<
        print '(a,es12.5,a)', 'xn=',xn,'<' ! xn=-1.23456E+05<
        print '(a,es11.5,a)', 'xn=',xn,'<' ! xn=***********<
        print '(a,es12.5,a)', 'xp=',xp,'<' ! xp= 1.23456E+05<
        print '(a,es15.5,a)', 'xp=',xp,'<' ! xp= 1.23456E+05<
        print '(a,es11.4,a)', 'xp=',xp,'<' ! xp= 1.2346E+05<
        print '(a,es11.4,a)', 'xn=',xn,'<' ! xn=-1.2346E+05<
        print '(a,es10.3,a)', ' c=',c,'<' ! c= 2.990E+08<

        end program 
