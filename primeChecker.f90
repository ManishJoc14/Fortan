function isPrime(n) result(isP)
    integer, intent(in):: n
    integer :: i,isP

    isP = 1

    do i=2, n-1
        if (mod(n,i) == 0) then 
            isP = 0
            exit 
        end if
    end do

end function isPrime

program primeChecker 
    integer  :: n

    write(*,*) "Enter any number : "
    read (*,*) n

    if (isPrime(n)==1) then
        write(*,*) n, "is a prime number "
    else 
        write(*,*) n, "is not a prime number "
    end if


    write(*,*) "prime numbbers upto",n,"are"
    do i=2, n
        if(isPrime(i)==1) then  
            write(*,*) i
        end if
    end do
    
end program primeChecker
