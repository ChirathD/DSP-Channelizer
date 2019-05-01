%part 3
%first we use a bandpass then we down convert by a factor of M then
%bringing the signal to baseband.

%-------------------Legend Part C-----------------------%
in_sig =  %Input Signal coefficients
bp = %Band-pass filter coefficients 
Fc = %Carrier frequency
Fs = %Sampling frequency
decRate = Decimation rate
%-------------------------------------------------------%



%Passing though bandpass filter
base_sig = conv(in_sig,bp);

%creat a matrix 
y1=reshape(base_sig(1:2*decRate*fix(length(base_sig)/2/decRate)), 2*decRate, ...
    fix(length(base_sig)/2/decRate));

%eye opening calculations
[~, idx]=max(mean(abs(y1.')));
%Down convert it by specified decRate.
ddc = base_sig(idx:decRate:end);

%Shifting to baseband
sub_carrier = exp(-j*2*pi*decRate*(Fc/Fs)*[1:length(ddc)]);
out = ddc.*sub_carrier;

%plotting
figure; plot(out(1:2:end),'*');
figure; plot(real(fft(out)));

