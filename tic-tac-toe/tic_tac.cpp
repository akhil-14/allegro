#include <allegro.h>

void init();
void deinit();
BITMAP *b=NULL,*b1=NULL,*b2=NULL,*b3=NULL,*b4=NULL,*b5=NULL,*b6=NULL,*b7=NULL,*b8=NULL;
int color;
int flag,z=5,a=6,c=7,d=8,e=9,f=10,g=11,h=12,i=13;

void game(){
     
      if(mouse_b==1){
                         rest(80);
                        if(mouse_x<50&&mouse_y<50){
                                                   if(b==NULL){
                                                   if(flag==1){
                                                               b=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b,screen,0,0,0,0,50,50);
                                                    z=flag;                
                                                    }
                                                   }
                                                   
                         if((mouse_x>50&&mouse_x<100)&& mouse_y<50){
                                                                    if(b1==NULL){
                                                                    if(flag==1){
                                                               b1=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b1=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b1,screen,0,0,50,0,50,50);
                                                    a=flag;      
                                                                 }
                                                                     }
                                                        
                          if((mouse_x>100&&mouse_x<150)&&mouse_y<50 ){
                                                                  if(b2==NULL){  
                                                                    if(flag==1){
                                                               b2=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b2=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b2,screen,0,0,100,0,50,50);
                                                    c=flag;      
                                                    }
                                                                    }                          
                         
                         if(mouse_x<50&&(mouse_y>50&&mouse_y<100)){
                                                                   if(b3==NULL){
                                                                   if(flag==1){
                                                               b3=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b3=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b3,screen,0,0,0,50,50,50);
                                                    d=flag;      
                                                                 }
                                                                   }
                                                                   
                         if((mouse_x>50&&mouse_x<100)&&(mouse_y>50&&mouse_y<100)){
                                                                                  if(b4==NULL){
                                                                                  
                                                                                  if(flag==1){
                                                               b4=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b4=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b4,screen,0,0,50,50,50,50);
                                                    e=flag;      
                                                                                    }
                                                                                  }
                         
                         if((mouse_x>100&&mouse_x<150)&&(mouse_y>50&&mouse_y<100)){
                                                                                  if(b5==NULL){ 
                                                                                   
                                                                                   if(flag==1){
                                                               b5=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b5=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b5,screen,0,0,100,50,50,50);
                                                    f=flag;      
                                                                                     }
                                                                                   }
                                                                                   
                          if((mouse_x<50)&&(mouse_y>100&&mouse_y<150)){
                                                                       if(b6==NULL){
                                                                       
                                                                       if(flag==1){
                                                               b6=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b6=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b6,screen,0,0,0,100,50,50);
                                                    g=flag;      
                                                                                    }
                                                                       }
                                                                       
                           if((mouse_x>50&&mouse_x<100)&&(mouse_y>100&&mouse_y<150)){
                                                                 if(b7==NULL){                    
                                                                                     if(flag==1){
                                                               b7=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b7=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b7,screen,0,0,50,100,50,50);
                                                    h=flag;      
                                                                 }
                                                                                     }
                                                                                 
                            
                          if((mouse_x>100&&mouse_x<150)&&(mouse_y>100&&mouse_y<150)) {
                                                                                       
                                                                                      if(b8==NULL){ 
                                                                                       if(flag==1){
                                                               b8=load_bitmap("C:/images/green.bmp",NULL);
                                                               flag=0;
                                                               }
                                                   else{
                                                        b8=load_bitmap("C:/images/red.bmp",NULL);
                                                        flag=1;
                                                        }
                                                    blit(b8,screen,0,0,100,100,50,50);
                                                    i=flag;      
                                                                                      }
                                                                                       } 
                             //  destroy_bitmap(b);    
                                                                                                                                                                                                                                                        
                         
                         }
		            
                 }
                 
void check_win(){
     
     if((z==1&&a==1&&c==1)||(d==1&&e==1&&f==1)||(g==1&&h==1&&i==1)||(z==1&&e==1&&i==1)||(g==1&&e==1&&c==1)||(z==1&&d==1&&g==1)||(a==1&&e==1&&h==1)||(c==1&&f==1&&i==1)){
                                textout_ex(screen,font," player 1 wins ",50,100,color,-1);
                                rest(2000);
                                exit(0);
                                }
		            
		            else if((z==0&&a==0&&c==0)||(d==0&&e==0&&f==0)||(g==0&&h==0&&i==0)||(z==0&&e==0&&i==0)||(g==0&&e==0&&c==0)||(z==0&&d==0&&g==0)||(a==0&&e==0&&h==0)||(c==0&&f==0&&i==0)){
                                textout_ex(screen,font," player 2 wins ",50,100,color,-1);
                                rest(2000);
                                
                                exit(0);
                                }
		
                     if(a<2 && z<2 && c<2&&d<2&&e<2&&f<2&&g<2&&h<2&&i<2){
                         textout_ex(screen,font," DRAW ",50,100,color,-1);
                                rest(2000);
                                exit(0);
                            }
     }                 

int main() {
	init();

clear_bitmap(screen);
show_os_cursor(2);	
color=makecol(0,250,255);
line(screen,50,0,50,150,color);
line(screen,100,0,100,150,color);
line(screen,0,50,150,50,color);
line(screen,0,100,150,100,color);

	while (!key[KEY_ESC]) {
                        
         game();
         check_win();
        
	}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 180, 150, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
