#include <stdio.h>
int main(){
	int s;
	
	printf("SAYI GIRINIZ: ");
	scanf("%d",&s);
	if(s<=0 && s>12){
		printf("LUTFEN TEKRAR DENEYINIZ.");
	}
	else{
		switch(s){
			case 1:
				printf("OCAK");
				break;
				case 2:
					printf("SUBAT");
					break;
					case 3:
						printf("MART");
						break;
						case 4:
							printf("NISAN");
							break;
							case 5:
								printf("MAYIS");
								break;
								case 6:
									printf("HAZIRAN");
									break;
									case 7:
										printf("TEMMUZ");
										break;
										case 8:
											printf("AGUSTOS");
											break;
											case 9:
												printf("EYLUL");
												break;
												case 10:
													printf("EKIM");
													break;
													case 11:
														printf("KASIM");
														break;
														case 12:
															printf("ARALIK");
				                                            break;
				                                            default:
				                                            	printf("HATA");
				                                            	break;
		
		}
		
	}
	return 0;
}
