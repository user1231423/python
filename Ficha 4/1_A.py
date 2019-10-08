for i in range ( 1, 6 ):
    print "i -> ", i
    
    for j in range ( 1,4 ):
        print "j-> ", j
        
        if ( i % j ) == 1:
            print "Resto da divisão entre ", i , "e ", j ,"= ", i+j