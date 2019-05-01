%part 1



%-------------------Legend Part A-----------------------%
in_sig =xx; % randint(1,2000); %Input Signal coefficients
lp = lp; %Low pass filter coefficients 
Fc =200; %Carrier frequency
Fs =1000; %Sampling frequency
decRate =100; %Decimation rate
%-------------------------------------------------------%





%Shifting to baseband and passing through Low Pass Filter.
sub_carrier = exp(-1i*2*pi*(Fc/Fs)*[1:length(in_sig)]);
base_sig = in_sig.*sub_carrier;
input=base_sig;

base_sig = conv(base_sig,lp);

%creat a matrix 
y1=reshape(base_sig(1:2*decRate*fix(length(base_sig)/2/decRate)), 2*decRate, ...
    fix(length(base_sig)/2/decRate));

%eye opening calculations
[~, idx]=max(mean(abs(y1.')));
out = base_sig(idx:decRate:end);

%plotting
figure; plot(out(3:2:end),'*');
figure; plot(real(fft(out)));

