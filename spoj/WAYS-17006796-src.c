f(i){return i<2?2:f(i-1)*(4*i-2)/i;}l="%d\n";main(t,m){for(scanf(l,&t);t--;scanf(l,&m),printf(l,f(m)));return 0;}