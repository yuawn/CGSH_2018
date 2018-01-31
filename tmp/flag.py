#!/usr/bin/env python



a = 0
b = 1023


for i in xrange(10):
    mid = ( a + b ) / 2
    print '{} time guess {}'.format( i , mid )

    c = raw_input( ">" )

    if c.strip() == 'big':
        a = mid
    else:
        b = mid

print mid