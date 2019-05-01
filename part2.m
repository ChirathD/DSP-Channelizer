%For part b.
%using bandpass filt first and then mixing and decimation.

%-------------------Legend Part B-----------------------%
%in_sig = Input Signal coefficients
%bp = Band-pass filter coefficients 
%Fc = Carrier frequency
%Fs = Sampling frequency
%decRate = Decimation rate
%-------------------------------------------------------%

function [out] = part2(in_sig,bp,Fc,Fs,DecRate)

filt_sig = conv(in_sig,bp);

%Shifting filtered signal to baseband.
sub_carrier = exp(-j*2*pi*(Fc/Fs)*[1:length(filt_sig)]);
predec = filt_sig.*sub_carrier;

%Down convert it by specified decRate.
y1=reshape(predec(1:2*DecRate*fix(length(predec)/2/DecRate)), 2*DecRate, ...
    fix(length(predec)/2/DecRate));

%eye opening calculations
[~, idx]=max(mean(abs(y1.')));
out = predec(idx:DecRate:end);

%plotting
figure; plot(out(1:2:end),'*');
figure; plot(real(fft(out)));
end
