// Bisection Alogorithm
double BisecYTM(double FV,double c, double PV, double d,double N, double a, double b)
{
    const int MaxIter = 100000;
    double Tol = 0.0000000001;
    double midP= 0.0;
    double midCdif;
    
    double lowCdif = PV - PVB(FV,c,a,d,N);
    double highCdif= PV - PVB(FV,c,b,d,N);
    
    if(lowCdif-highCdif>0)
       return -1;
    else 
       for(int i=0;i<= MaxIter;i++){
        midP= (a+b)/2.0;
        midCdif=PV - PVB(FV,c,midP,d,N);
    if(abs(midCdif)<Tol) goto LastLine;
    else
    {
        if (midCdif>0) b=midP;
        else a=midP;
        }
       }
    LastLine:
    return midP;
}
