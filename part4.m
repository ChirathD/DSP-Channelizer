%part 4
%for this component we do not need a mixer to shift the spectrum to
%baseband as the input signal is expected to be a multiple of 2*Pi/M where
%M is the decimation Rate (decRate), since this would create an image at
%0Hz (Baseband).

%We assume that the decRate and all the attributes of the signal are known 
%at all times.

%keep the signal constant as before but change the filter specs used to
%compliment the input signal.

%-------------------Legend Part D-----------------------%
in_sig = xx; % Input Signal coefficients
bp =bandpass; %Band-pass filter coefficients 
DecRate =100; % Decimation rate
%-------------------------------------------------------%



predec =conv(in_sig,bp);

 y1=reshape(predec(1:2*DecRate*fix(length(predec)/2/DecRate)), 2*DecRate, ...
     fix(length(predec)/2/DecRate));
 
 %eye opening calculations
 [~, idx]=max(mean(abs(y1.')));
 out = predec(idx:DecRate:end);

%plotting
figure; plot(xx(1:2:end),'*');
figure; plot(real(fft(xx)));


