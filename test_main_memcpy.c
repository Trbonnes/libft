/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main_memcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:00:27 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/18 10:42:49 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void	ft_fonction(void *rt)
{
	rt = NULL;
}

int main(void)
{
	size_t	i;
	//char	*dest;
	//void (*f)(void *);
	//t_list *un;
	//t_list *deux;
	//t_list *trois;
	//t_list *dest;
	//t_list **ptr = NULL;
	//const char *s;
	//int p;
	//char *s;
	//char p;

	i = 0;
	printf("%lu\n", i - 1);
	//f = &ft_fonction;
	//un = malloc(sizeof(t_list));
	//deux = malloc(sizeof(t_list));
	//trois = malloc(sizeof(t_list));
	//un->content = "un";
	//deux->content = "deux";
	//trois->content = "trois";
	//un->next = deux;
	//deux->next = trois;
	//trois->next = NULL;
	//*ptr = un;
	//p = malloc(15);
	//s = (void *)p;
	//s = ft_strrchr("Bonjour", i);
	//p = strrchr("Bonjour", i);
	//ft_putstr(s);
	//ft_putstr(ft_split(s, p));
	//printf("\n");
	//dest = ft_memcpy("");
	//s = strdup("");
	//ft_lstclear(ptr, f);
	//while (dest)
	//{
	//dest = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	//while (dest[i])
	//{
	//	printf("test 2: %s\n", dest[i]);
	//	i++;
	//}
	/*dest = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	i = 0;
	while (dest[i])
	{
		printf("test 4: %s\n", dest[i]);
		i++;
	}
	dest = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	i = 0;
	while (dest[i])
	{
		printf("test 5: %s\n", dest[i]);
		i++;
	}*/
	//	dest = dest->next;
	//printf("mine : %p\n", dest);
	//printf("mine : %s\n", dest);
	//}
	//printf("gold standard : %p\n", s);
	//printf("gold standard : %s\n", s);
	//ft_memmove("frgthyjuikhgfd", "", 23);

	return(0);
}

/*void	start_test(char *str)
{
	printf("%s\n", str);
}

void	ft_print_list(t_list *begin)
{
	int i = 0;
	t_list * current;
	current = begin;
	if (!begin)
		return;
	while (current->next!= NULL){
		printf("Maillon %d\n address = %p\n content = %s\n next = %p\n", i, current,current->content, current->next);
		current = current->next;
		i++;
	}
	printf("Maillon %d\n address = %p\n content = %s\n next = %p\n", i, current,current->content, current->next);
}

void rand_str(char *dest, size_t length) {
    char charset[] = "0123456789"
                     "abcdefghijklmnopqrstuvwxyz"
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (length-- > 0) {
        size_t index = (double) rand() / RAND_MAX * (sizeof charset - 1);
        *dest++ = charset[index];
    }
    *dest = '\0';
}

void	memset_test(int memsize, int c, size_t len)
{
	void *ptr1 = memsize ? calloc(1,memsize) : 0;
	void *ptr2 = memsize ? calloc(1,memsize) : 0;
	printf("1rst memset\n");
	memset(ptr1, c, len);
	printf("2nd memset\n");
	ft_memset(ptr2, c, len);
	if(memcmp(ptr1,ptr2,memsize) != 0)
	{
		printf("ERROR : Memory difers\n");
		return ;
	}
	printf("OK\n");
}

void	bzero_test(int memsize, size_t len)
{
	void *ptr1 = memsize ? malloc(memsize) : 0;
	void *ptr2 = memsize ? malloc(memsize) : 0;
	rand_str(ptr1,memsize);
	strcpy(ptr2,ptr1);
	printf("1rst bzero\n");
	bzero(ptr1, len);
	printf("2nd bzero\n");
	ft_bzero(ptr2, len);
	if(memcmp(ptr1,ptr2,memsize) != 0)
	{
		printf("ERROR : Memory difers\n");
		return ;
	}
	printf("OK\n");
}

void	memcpy_test(int srcSize, int destSize, size_t len)
{
	void *src = srcSize ? calloc(1,srcSize) : 0;
	void *dest1 = destSize ? calloc(1,destSize) : 0;
	void *dest2 = destSize ? calloc(1,destSize) : 0;
	rand_str(src,srcSize);
	printf("1rst memcpy\n");
	assert(memcpy(dest1,src,len) == dest1);
	printf("2nd memcpy\n");
	assert(ft_memcpy(dest2, src, len) == dest2);
	if(memcmp(dest1,dest2,len) != 0)
	{
		printf("ERROR : Memory difers\n");
		return ;
	}
	printf("OK\n");
}

void	memccpy_test(char *str, int c, size_t len)
{
	void *dest1 = calloc(1,500);
	void *dest2;
	printf("1rst memcpy\n");
	void *p1 = memccpy(dest1,str, c,len);
	dest2 = strdup(dest1);
	printf("2nd memcpy\n");
	void *p2 = ft_memccpy(dest1, str, c, len);
	assert(p1 == p2);
	if(memcmp(dest1,dest2,len) != 0)
	{
		printf("ERROR : Memory differs MEMORY1 : \"%s\" MEMORY2 : \"%s\"\n", dest1, dest2);
		return ;
	}
	printf("OK\n");
}

void	memmove_test(int srcSize,int offset, size_t len)
{
	char *src1 = calloc(1,srcSize);
	rand_str(src1,srcSize);
	char *src2 = strdup(src1);
	
	char *dest1;
	char *dest2;

	if(!offset)
	{
		dest1 = src1;
		dest2 = src2;
		src1 -= offset;
		src2 -= offset;
	}
	else{
		dest1 = src1 + offset;
		dest2 = src2 + offset;
	}
	void *p1 = ft_memmove(dest1, src1, len);
	void *p2 = ft_memmove(dest2, src2, len);
	assert(p1 == dest1);
	assert(p2 == dest2);
	if(memcmp(dest1,dest2,len) != 0 || memcmp(dest1,dest2,srcSize) != 0)
	{
		printf("ERROR : Memory differs\n");
		return ;
	}
	printf("OK\n");
}

void	memchr_test(int c, size_t len)
{
	void *src = calloc(1,500);
	rand_str(src, 500);
	void *p1 = memchr(src, c, len);
	void *p2 = ft_memchr(src, c, len);
	assert(p1 == p2);
	printf("OK\n");
}

void	memcmp_test(void *str1, void *str2, size_t len)
{
	assert(memcmp(str1,str2,len) == ft_memcmp(str1,str2,len));
	printf("OK\n");
}

void	strlen_test(char *str)
{
	assert(strlen(str) == ft_strlen(str));
	printf("OK\n");
}

void	isalpha_test(int c)
{
	assert(isalpha(c) == ft_isalpha(c));
	printf("OK\n");
}

void	isdigit_test(int c)
{
	assert(isdigit(c) == ft_isdigit(c));
	printf("OK\n");
}

void	isalnum_test(int c)
{
	assert(isalnum(c) == ft_isalnum(c));
	printf("OK\n");
}

void	isascii_test(int c)
{
	assert(isascii(c) == ft_isascii(c));
	printf("OK\n");
}

void	isprint_test(int c)
{
	assert(isprint(c) == ft_isprint(c));
	printf("OK\n");
}

void	toupper_test(int c)
{
	assert(toupper(c) == ft_toupper(c));
	printf("OK\n");
}

void	tolower_test(int c)
{
	assert(tolower(c) == ft_tolower(c));
	printf("OK\n");
}

void	strchr_test(char *str, int c)
{
	assert(strchr(str, c) == ft_strchr(str,c));
	printf("OK\n");
}

void	strrchr_test(char *str, int c)
{
	assert(strrchr(str, c) == ft_strrchr(str,c));
	printf("OK\n");
}

void	strnstr_test(char *haystack, char *needle, int n)
{
	assert(strnstr(haystack, needle, n) == ft_strnstr(haystack, needle, n));
	printf("OK\n");
}

void	atoi_test(char *str)
{
	assert(atoi(str) == ft_atoi(str));
	printf("OK\n");
}

void	calloc_test(size_t count, size_t size)
{
	void *p1 = calloc(count, size);
	void *p2 = ft_calloc(count, size);
	if(memcmp(p1, p2, count * size) != 0)
	{
		printf("ERROR : Memory differs\n");
		return ;
	}
	printf("OK\n");
}

void	strdup_test(char *str)
{
	void *s1 = strdup(str);
	void *s2 = ft_strdup(str);
	if(strcmp(s1,s2) != 0)
	{
		printf("ERROR : String differs => \"%s\" VS \"%s\"\n",s1,s2);
		return ;
	}
	printf("OK\n");
}

void substr_test(char *s, unsigned int start, size_t len)
{
	printf("\"%s\" start=%d len=%zu TO SUB \"%s\"\n",s,start,len,ft_substr(s,start, len));
}

void strjoin_test(char *s1, char *s2)
{
	printf("1st : \"%s\" 2nd : \"%s\" joined \"%s\"\n",s1,s2,ft_strjoin(s1,s2));
}
void strtrim_test(char *s, char *set)
{
	printf("string : \"%s\" charset : \"%s\" trimmed string \"%s\"\n",s,set,ft_strtrim(s,set));
}

void split_test(char *str, char sep)
{
	printf("---------START\n");
	printf("\"%s\" \"%c\"\n", str, sep);
	char **strs = ft_split(str, sep);

	int i = 0;
	while (strs && strs[i])
	{
		printf("\"%s\"\n",strs[i]);
		i++;
	}
	
	printf("---------END\n");
}

void itoa_test(int n)
{
	printf("%s \n", ft_itoa(n));
}


void	tolowerstr(void *ptr)
{
	char *str = (char*)ptr;
	while (*str)
	{
		if (*str>= 'A' && *str <= 'Z')
		*str += 32;
		str++;
	}
}

char	transformchar(unsigned int i, char c)
{
	(void) i;
	return (c >= 'A' && c<= 'Z' ? c +32 : c);
}

void	*go(void *content)
{
	char *str = ft_strdup((char *) content);
	tolowerstr(str);
	return	(str);
}

int		main(void){
	//start_test("MEMSET");
	//memset_test(0,15,13);
	//memset_test(50,15,15);
	//memset_test(50,12,8);
	//memset_test(50,24,6);
	//memset_test(50,500,25);
	//ft_memset(0,45,52);

	//start_test("BZERO");
	//bzero_test(50,0);
	//bzero_test(50,60);
	//bzero_test(50,8);
	//bzero_test(50,150);

	//ft_strlcpy(0,0,0);
	
	// start_test("MEMCPY");
	// memcpy_test(50,15,15);
	// memcpy_test(50,12,8);
	// memcpy_test(50,24,6);
	// memcpy_test(50,50,250);

	start_test("MEMCCPY");
	 //memccpy_test("",'a',0);
	 memccpy_test("yes",'b',500);
	 memccpy_test("asdasdsa6bcnbcvncbnv",'6',6);
	 memccpy_test("qewrtycazerty",'c',50);
	ft_memccpy(0,0,52,10);
	
	// start_test("MEMMOVE");
	// memmove_test(50,0,20);
	// memmove_test(50,10,20);
	// memmove_test(50,-10,20);
	// memmove_test(0,30,20);
	
	// start_test("MEMCHR");
	// memchr_test(92,15);
	// memchr_test(16,56);
	// memchr_test(45,0);
	// memchr_test(68,22);
	
	// start_test("MEMCMP");
	// memcmp_test("","",0);
	// memcmp_test("","",10);
	// memcmp_test("dsfsdfsd","sdff",0);
	// memcmp_test("dsfsdfsd","sdff",4);
	// memcmp_test("aaaaa","aaa",4);
	// memcmp_test("qwerty^$","qwertyuiop",10);
	// memcmp_test("bobobobobob","bobobobobobp",16);
	// memcmp_test((uint8_t *)"\xff\xaa\xde\200",(uint8_t *)"\xff\xaa\xde\0",8);

	// start_test("STRLEN");
	// strlen_test("2147483647");
	// strlen_test("-2147483648");
	// strlen_test("    			\n\n\n 55");
	// strlen_test("");

	// start_test("ISALPHA");
	// isalpha_test('a');
	// isalpha_test('Z');
	// isalpha_test('/');
	// isalpha_test('\0');

	// start_test("ISDIGIT");
	// isdigit_test('a');
	// isdigit_test('1');
	// isdigit_test('9');
	// isdigit_test('\0');
	
	// start_test("ISALLNUM");
	// isalnum_test('a');
	// isalnum_test('1');
	// isalnum_test('9');
	// isalnum_test('\0');

	// start_test("ISASCII");
	// isascii_test('a');
	// isascii_test(127);
	// isascii_test('9');
	// isascii_test(-10);
	
	// start_test("ISPRINT");
	// isprint_test('a');
	// isprint_test(127);
	// isprint_test('\n');
	// isprint_test(-10);
	
	// start_test("TOUPPER");
	// toupper_test('a');
	// toupper_test(127);
	// toupper_test('\n');
	// toupper_test('Z');
	
	// start_test("TOLOWER");
	// tolower_test('a');
	// tolower_test(127);
	// tolower_test('\n');
	// tolower_test('Z');

	//start_test("STRCHR");
	// strchr_test("str",'a');
	// strchr_test("",'b');
	// strchr_test("ma hart",'\0');
	// strchr_test("ma sole",'s');
	// strchr(0,50);
	
	// start_test("STRRCHR");
	// strrchr_test("str",'a');
	// strrchr_test("",'b');
	// strrchr_test("ma hart",'\0');
	// strrchr_test("ma soles",'s');
	// ft_strrchr(0, 45);

	//start_test("STRNSTR");
	// strnstr_test("str","tr",2);
	// strnstr_test("strdsds","ds",2);
	// strnstr_test("str","trdfd",25);
	// strnstr_test("str","",2);
	//strnstr_test(0,"",2);
	//strnstr_test("str",0,2);

	// start_test("ATOI");
	// atoi_test("2147483647");
	// atoi_test("-2147483648");
	// atoi_test("0");
	// atoi_test("1231321321321321321");
	// atoi_test("    			\n\n\n 55");
	// atoi_test("");

	// start_test("CALLOC");
	// calloc_test(0,0);
	// calloc_test(0,5);
	// calloc_test(5,0);
	// calloc_test(5,15);

	//start_test("STRDUP");	
	// strdup_test("");
	// strdup_test("\0");
	// strdup_test("QWERTY");
	// strdup(0);

	//start_test("STRMAPI");	
	//printf("\"%s\" expected NULL\n",ft_strmapi(0, 0));
	//printf("\"%s\" expected NULL\n",ft_strmapi("", 0));
	//printf("\"%s\" expected NULL\n",ft_strmapi(0, &transformchar));
	//printf("\"%s\" expected \"\"\n",ft_strmapi("", &transformchar));
	//printf("\"%s\" expected \"ta daronne\"\n",ft_strmapi("TA DARONNE", &transformchar));

	//start_test("SUBSTR");	
	//substr_test(0, 0, 0);
	//substr_test("", 0, 0);
	//substr_test("", 0, 5);
	//substr_test("Bonjour", 3, 5);
	//substr_test("Bonjour", 0, 50);

	//start_test("STRJOIN");
	//strjoin_test(0,0);
	//strjoin_test(0,"");
	//strjoin_test("",0);
	//strjoin_test("","");
	//strjoin_test("","sd");
	//strjoin_test("sd","");
	//strjoin_test("abc","def");

	//start_test("STRTRIM");
	//strtrim_test(0, 0);
	//strtrim_test("sda", 0);
	//strtrim_test(0, "*");
	//strtrim_test("", "");
	//strtrim_test("", "*");
	//strtrim_test("asdasd", "teia");
	//strtrim_test("ABC", "*");
	//strtrim_test(" **** A ****BC ****** ", " *");
	//strtrim_test(" ****  **** ****** ", " *");
	//strtrim_test("test fonction strim", "teia");

	//start_test("SPLIT");
	//split_test(0,0);
//	split_test(0,'l');
//	split_test("abcdllllll",0);
//	split_test("",'l');
//	split_test("abcdllllll",'l');
	//split_test("abcdllllll",'\0');
	//plit_test("abcdllllllefgh",'l');
	//split_test("alblcldlelf",'l');
	//split_test("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

	//start_test("ITOA");
	//itoa_test(155);
	//itoa_test(0);
	//itoa_test(-55);
	//itoa_test(-21473648);
	//itoa_test(21473647);

	//start_test("PUTNBR_FD");
	//ft_putnbr_fd(-2147483648,1);
	//printf("\n");
	//ft_putnbr_fd(0,1);
	//printf("\n");
	//ft_putnbr_fd(2147483647,1);
	//printf("\n");


	
	////////////////	BONUS	////////////////

		printf("\n\n//////////////// BONUS //////////////\n\n\n");


		start_test("LST_NEW");
		t_list *t = ft_lstnew("B");
		t_list *tt = ft_lstnew("Premier élément");
		t_list *ttt;
		t_list *allocated; 
		ft_print_list(t);
		ft_print_list(tt);

		 start_test("LST_ADD_FRONT");
		 ft_lstadd_front(0,0);
		 ft_lstadd_front(0,ft_lstnew("A"));
		 ft_lstadd_front(&t,0);
		 ft_lstadd_front(&t,ft_lstnew("A"));
		 ft_print_list(t);

		 start_test("LST_SIZE");
		 printf("%d\n", ft_lstsize(0));
		 printf("%d\n", ft_lstsize(tt));
		 printf("%d\n", ft_lstsize(t));

		 start_test("LST_LAST");
		 ft_print_list(ft_lstlast(0));
		 ft_print_list(ft_lstlast(tt));
		 ft_print_list(ft_lstlast(t));
		
		 start_test("LST_ADD_BACK");
		 ft_lstadd_back(0,0);
		 ft_lstadd_back(0,ft_lstnew("Second élément"));
		 ft_lstadd_back(&tt,ft_lstnew("Second élément"));
		 ft_lstadd_back(&ttt,ft_lstnew("SOLO FRVR"));
		 ft_print_list(tt);
		 ft_print_list(ttt);

		 start_test("LST_ADD_BACK");
		 char *str = strdup("IM ALLOCATED");
		 allocated = ft_lstnew(str);
		 ft_print_list(allocated);
		 ft_lstdelone(0,0);
		 ft_lstdelone(allocated,0);
		 ft_lstdelone(0,0);
		 ft_lstdelone(allocated,free);
		 ft_print_list(allocated);

		 start_test("LST_CLEAR");
		 allocated = 0;
		 char *s1 = strdup("IM ALLOCATED");
		 char *s2 = strdup("IM ALLOCATED");
		 char *s3 = strdup("IM ALLOCATED");
		 ft_lstadd_front(&allocated,ft_lstnew(s1));
		 ft_lstadd_front(&allocated,ft_lstnew(s2));
		 ft_lstadd_front(&allocated,ft_lstnew(s3));
		 printf("\nooooo BEFORE oooooo\n");
		 ft_print_list(allocated);
		 ft_lstclear(0,0);
		 ft_lstclear(0,free);
		 ft_lstclear(&allocated,0);
		 printf("\nooooo AFTER  oooooo\n");
		 ft_lstclear(&allocated,free);
		// ft_print_list(allocated);

		 start_test("LST_ITER");
		 allocated = 0;
		 s1 = strdup("IM ALLOCATED");
		 s2 = strdup("IM ALLOCATED");
		 s3 = strdup("IM ALLOCATED");
		 ft_lstadd_front(&allocated,ft_lstnew(s1));
		 ft_lstadd_front(&allocated,ft_lstnew(s2));
		 ft_lstadd_front(&allocated,ft_lstnew(s3));
		 printf("\nooooo BEFORE oooooo\n");
		 ft_print_list(allocated);
		 ft_lstiter(0,0);
		 ft_lstiter(0,tolowerstr);
		 ft_lstiter(allocated,0);
		 printf("\nooooo AFTER  oooooo\n");
		 ft_lstiter(allocated,tolowerstr);
		 ft_print_list(allocated);

		 start_test("LST_MAP");
		 allocated = 0;
		 s1 = strdup("IM ALLOCATED");
		 s2 = strdup("IM ALLOCATED");
		 s3 = strdup("IM ALLOCATED");
		 ft_lstadd_front(&allocated,ft_lstnew(s1));
		 ft_lstadd_front(&allocated,ft_lstnew(s2));
		 ft_lstadd_front(&allocated,ft_lstnew(s3));
		 printf("\nooooo ORIGINAL LIST oooooo\n");
		 ft_print_list(allocated);
		 ft_lstmap(0,0);
		 ft_lstmap(0,(void *)tolowerstr);
		 ft_lstmap(allocated,0);
		 printf("\nooooo NEW LIST  oooooo\n");
		 t_list *newl = ft_lstmap(allocated,go);
		 ft_print_list(newl);
	}*/