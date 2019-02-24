import java.io.File;
import java.io.IOException;

import javax.sound.sampled.UnsupportedAudioFileException;

public class Test {
	public static void main(String[] args) {
		try {
			WaveFile wav = new WaveFile(new File("C:/Roses.wav"));
			//System.out.println(wav.getSampleRate());
			int amplitudeExample = wav.getSampleInt(140); // 140th amplitude value.
			int sumAmplitude=0;
			int numAmplitudes=0;
			int maxAmplitude = 0;
			for (int i = 0; i < wav.getFramesCount(); i=i+4410) {
			    int amplitude = wav.getSampleInt(i);
			    if(amplitude>maxAmplitude) {
			    	maxAmplitude=amplitude;
			    }

			    // Plot.
			    numAmplitudes++;
			    sumAmplitude+=amplitude;
			}
			System.out.println(maxAmplitude+" yuh");
			int[] arrRanges = {0, maxAmplitude/9, 2*maxAmplitude/9, 3*maxAmplitude/9, 4*maxAmplitude/9, 5*maxAmplitude/9,  6*maxAmplitude/9, 7*maxAmplitude/9, 8*maxAmplitude/9};
			String nums = "";
			int numLights=0;
			System.out.println(maxAmplitude);
			for (int i = 0; i < wav.getFramesCount(); i=i+4410) {
			    for(int j=0; j<arrRanges.length; j++) {
			    	if(wav.getSampleInt(i)>arrRanges[j]) {
			    		numLights=j;
			    	}
			    }
			    nums=nums+(numLights+1);
			    
			}
			System.out.println(nums);
//			System.out.println(nums);
//		    System.out.println("Arr["+(i/4410)+"]"+" = "+numLights+";");
//			double avgAmplitude = sumAmplitude/(1.0*numAmplitudes);
//			System.out.println(avgAmplitude);
//			for (int i = 0; i < wav.getFramesCount(); i=i+44100) {
//				int amplitude = wav.getSampleInt(i);
//			    if(amplitude>avgAmplitude) {
//			    	System.out.println(i/44100.0);
//			    }
//			}
			
		} catch (UnsupportedAudioFileException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println(endOfTheCausasians("Murda on the bea"));

	}
	public static int endOfTheCausasians(String str) {
		String invStr = "";
		for(int i = str.length()-1; i >= 0; i--) {
			invStr += str.charAt(i);
		}
		int ind = invStr.indexOf(" ");
		ind = invStr.length() - ind - 1;
		return ind;
	}
	

}
