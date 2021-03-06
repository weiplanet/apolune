

=========================================================================  
Turkish translation: by Slevilex
=========================================================================

Lost Astronaut's Apolune README
Destekleriniz için teşekkürler!

.s5SSSs.                                                              
      SS. .s5SSSs.  .s5SSSs.  .s        .s    s.  .s    s.  .s5SSSs.  
sS    S%S       SS.       SS.                 SS.       SS.       SS. 
SS    S%S sS    S%S sS    S%S sS        sS    S%S sSs.  S%S sS    `:; 
SSSs. S%S SS .sS::' SS    S%S SS        SS    S%S SS `S.S%S SSSs.     
SS    S%S SS        SS    S%S SS        SS    S%S SS  `sS%S SS        
SS    `:; SS        SS    `:; SS        SS    `:; SS    `:; SS        
SS    ;,. SS        SS    ;,. SS    ;,. SS    ;,. SS    ;,. SS    ;,. 
:;    ;:' `:        `:;;;;;:' `:;;;;;:' `:;;;;;:' :;    ;:' `:;;;;;:' 
                                                                      

Klavye Kontrolleri
-----------------

Oyun Menüsü (PLAY, EXIT) ile açılabilir:

Yeni bir oyun başlatmak için: ENTER ya da iki CTRL'den biri (Control Tuşu)
Oyundan çıkmak için:    ESC, (`) "Back Tick" / "Tilde" ya da Backspace (Backspace)

Oyun:

Bir klavyeyi paylaşırken ya da tek kişilik oyunlarda
-----------------------------------------------------

Kaptan Tarafı:                     Silahçı Tarafı

WASD    HAREKET                    Arrow Keys	DÖN / UÇ
LCTRL   ATEŞ ET                    RCTRL		ATEŞ ET


Birden fazla kontrolcüye atamak için ekstradan tuşlar:
,. [] <>		SOLA/SAĞA DÖN
BKSP (BACKSPACE)	ÇIK

Numpad 4,6 (sol ve sağ ok tuşları gibi)
Numpad 8,2 (yukarı ve aşağı ok tuşları ya da W ve S gibi)

İkinci Oyuncu
--------------------

İkinci oyuncu için ilk 30 öldürme sırasında Y veya U tuşlarına basın.  
İki kişilik oyunlarda tek kişilik oyunlardan farklı sıralamalar olur.
İkinci oyuncu birinci oyuncuya bağlıdır ve ikisi de aynı anda ölür.


İkinci Oyuncu'nun tuşları:
IJKL (Ok tuşlarının eşiti)
FTGH (WASD'nin eşiti)
YU   (LCTRL ve RCTRL)

* İkinci bir klavye çalışabilir


Using a Controller
------------------

Generic USB Joystiği için ayarlar vardır.
iBuffalo Classic USB Gamepad'indeki gibi çift triggera ihtiyacınız vardır.
Steam Controller'ıyla da çalışır.  İlk 200 öldürme klavyeyle en kolayıdır
yani klavye berbat olmadığı sürece.

Advanced Launch Options
-----------------------

Apolune'u çeşitli çözünürlük ve pencere ayarlarında oynayabileceğini biliyor muydun?

Steam'de oyuna sağ tıklayıp Gelişmiş Başlatma Ayarlarını kullanarak
aşağıdaki komutlardan girip sonuçlarını görebilirsiniz:

Lütfen bütün komutların - işareti ile başlaması gerektiğini unutmayın.


Örneğin "-window" çalışır ama "window" çalışmaz.

Örnek olarak pencerede 720p modu için Steam'de oyunu başlatmadan önce
gelişmiş başlatma ayarlarına şunları girin "ADVANCED LAUNCH OPTIONS":

	-windowed -720p

Sırası önemli değil yani bu da çalışır:

	-720p -windowed

Pencere Ayarları

	-window					OpenGL Uygulama Penceresini oluştururken tam ekran oluşturmayı devre dışı bırakır.
	-windowed				Yukarıdakinin aynısı

	-borderless				GPU tam ekran yerine çerçevesiz tam ekran oluşturur.

	-bordered				GPU tam ekran yerine çerçeveli tam ekran oluşturur.

Oyun Motor Ayarları

	-nolimit
			FPS'yi sınırlama (bazı sistemlerde zamanı hızlandırır,
			onun dışında Frame Sleep 60 FPS'te 17 milisaniye sürmeyen kareleri doldurur

Özel Çözünürlükler

 -320x200	-720x480
 -1152x768	-1280x1024
 -1600x1200
	-320x240
 -854x480	-1280x720
 -1366x768	-1768x992

 -320x400	-768x576
 -1280x768	-1400x1050
 -1920x1080
	-320x486
 -800x600	-1280x800
 -1440x900	-480x320
 -1024x600	-1280x854
 -1440x960	-640x480
 -1024x768	-1280x960
 -1680x1050 			

Trade Name tarafından HD Çözünürlükler

	-hd720   
	-hd720p  
	-720p    
	
	Çözünürlüğü 1280x768 (HD720p) yapar.

	-hd1080 
	-1080i  
	-1080p  
	-1080 
	
	Çözünürlüğü 1920x1080 (HD 1080i) yapar

Özel Çözünürlükler

	-cga      		Çözünürlüğü 320x200 (CGA) yapar                 
	-tv       		Çözünürlüğü 320x400 (Classic scanline TV) yapar 
	-qvga     		Çözünürlüğü 320x240 (QVGA) yapar                
	-320x243  		Çözünürlüğü 320x243 (pseudo NTSC) yapar         
	-ntsc     		Çözünürlüğü 320x486 (NTSC non-interlaced) yapar 
	-pal      		Çözünürlüğü 768x576 (PAL) yapar                 
	-vga      		Çözünürlüğü 640x480 (VGA) yapar                 
	-800x480  		Çözünürlüğü 800x480 (WVGA) yapar                
	-wvga     		Çözünürlüğü 854x480 (WVGA) yapar                
	-svga     		Çözünürlüğü 800x600 (SVGA) yapar                
	-wsvga    		Çözünürlüğü 1024x600 (WSVGA) yapar              
	-xga      		Çözünürlüğü 1024x768 (XGA) yapar                
	-wxga     		Çözünürlüğü 1280x768 (WXGA) yapar               
	-sxga     		Çözünürlüğü 1280x1024 (SXGA) yapar              
	-sxga+    		Çözünürlüğü 1400x1050 (SXGA+) yapar             
	-wsxga+   		Çözünürlüğü 1680x1050 (WSXGA+) yapar            
	-uxga     		Çözünürlüğü 1600x1200 (UXGA) yapar              
	-qxga     		Çözünürlüğü 2048x1536 (QXGA) yapar              
	-cinema   		Çözünürlüğü 2560x1440 (Apple Cinema T) yapar    
	-wqxga    		Çözünürlüğü 2560x1600 (WQXGA) yapar             
	-qsxga    		Çözünürlüğü 2560x2048 (WSXGA) yapar             

Matrox Dual- ve TripleHead2Go desteği

	-32godual1		1600x600 DualHead2Go Dual Mode 1      
	-32godual2 		2048x768 DualHead2Go Dual Mode 2      
	-32godual3 		2560x720 DualHead2Go Dual Mode 3      
	-32godual4 		2560x768 DualHead2Go Dual Mode 4      
	-32godual5 		2560x800 DualHead2Go Dual Mode 5      
	-32godual6 		2560x800 DualHead2Go Dual Mode 6      
	-32godual7 		2560x960 DualHead2Go Dual Mode 7      
	-32godual8 		2560x1024 DualHead2Go Dual Mode 8     
	-32godual9 		2720x768 DualHead2Go Dual Mode 9      
	-32godual10		2800x1050 DualHead2Go Dual Mode 10    
	-32godual11		3200x900 DualHead2Go Dual Mode 11     
	-32godual12		3200x1200 DualHead2Go Dual Mode 12    
	-32godual13		3360x1050 DualHead2Go Dual Mode 13    
	-32godual14		3840x1080 DualHead2Go Dual Mode 14    
	-32godual15		3840x1200 DualHead2Go Dual Mode 15    
	-32godual16		4096x1152 DualHead2Go Dual Mode 16    
	-32godual17		4096x1152 DualHead2Go Dual Mode 17    
	-32gotri1  		1920x480 TripleHead2Go Triple Mode 1  
	-32gotri2  		2400x480 TripleHead2Go Triple Mode 2  
	-32gotri3  		2400x600 TripleHead2Go Triple Mode 3  
	-32gotri4  		3072x768 TripleHead2Go Triple Mode 4  
	-32gotri5  		3840x720 TripleHead2Go Triple Mode 5  
	-32gotri6  		3840x768 TripleHead2Go Triple Mode 6  
	-32gotri7  		3840x800 TripleHead2Go Triple Mode 7  
	-32gotri8  		3840x960 TripleHead2Go Triple Mode 8  
	-32gotri9  		3840x1024 TripleHead2Go Triple Mode 9 
	-32gotri10 		4080x768 TripleHead2Go Triple Mode 10 
	-32gotri11 		4098x768 TripleHead2Go Triple Mode 11 
	-32gotri12 		4200x1050 TripleHead2Go Triple Mode 12
	-32gotri13 		4320x900 TripleHead2Go Triple Mode 13 
	-32gotri14 		4800x900 TripleHead2Go Triple Mode 14 
	-32gotri15 		5040x1050 TripleHead2Go Triple Mode 15
	-32gotri16 		5760x1080 TripleHead2Go Triple Mode 16

Hile kodlarını ve komutlarını etkinleştir
(Sıralamaları ve çoğu başarımı devre dışı bırakacak)

-cheating