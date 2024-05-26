t=0:1/2e3:1/5;
ph_a = 3.3*sin(2*pi*50*t);
ph_b = 3.3*sin(2*pi*50*t-(2*pi/3));
ph_c = 3.3*sin(2*pi*50*t-(4*pi/3));
    
% close all
% plot(t,ph_a,t,ph_b,t,ph_c)