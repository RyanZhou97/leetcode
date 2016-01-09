class Solution(object):
    def isPowerOfThree(self, n):
        if n>0:
            a=math.log(n)/math.log(3.0);
        else :
            a=0.5;
        b=round(a,0)
        if abs(a-b)<1e-10:
            return True;
        else:
            return False;
            
