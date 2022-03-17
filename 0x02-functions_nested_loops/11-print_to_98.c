
Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  1-isdigit.c  main.h  _putchar.c  README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git add .
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git commit -m "retrry"
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git push
Username for 'https://github.com': Abeniephghp_qJPVWu8MVRz4VJiVmLZyDERf0YhJ7X39P^[[A^[[B
Password for 'https://@github.com':
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/Abenieph/alx-low_level_programming.git/'
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 291 bytes | 291.00 KiB/s, done.
Total 3 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   45e22b4..59ec954  main -> main
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  1-isdigit.c  main.h  _putchar.c  README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# rm README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>README.md
more nested loop
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "retry"
[main f794e34] retry
 1 file changed, 1 insertion(+), 1 deletion(-)
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
remote: Support for password authentication was removed on August 13, 2021. Please use a personal access token instead.
remote: Please see https://github.blog/2020-12-15-token-authentication-requirements-for-git-operations/ for more information.
fatal: Authentication failed for 'https://github.com/Abenieph/alx-low_level_programming.git/'
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "retry"
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 334 bytes | 334.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   59ec954..f794e34  main -> main
root@00311de0088f:~/alx-low_level_programming# lsd
bash: lsd: command not found
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  1-isdigit.c  main.h  _putchar.c  README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>2-mul.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 2-mul.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add  .
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 2-mul.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 2-mul.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git ADD .
git: 'ADD' is not a git command. See 'git --help'.
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "the mul"
[main 13fb39f] the mul
 1 file changed, 10 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/2-mul.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 421 bytes | 421.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   f794e34..13fb39f  main -> main
root@00311de0088f:~/alx-low_level_programming# cd ..
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  1-isdigit.c  2-mul.c  main.h  _putchar.c  README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 0-isupper.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 0-isupper.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "editted"
[main 6852abf] editted
 1 file changed, 3 deletions(-)
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 361 bytes | 361.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   13fb39f..6852abf  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>3-printnumber.c
#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void)
{
        int i;

        for (i = '0'; i <= '9'; i++)
        {
                _putchar(i);
        }
        _putchar('\n');
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 3-printnumber.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commmit -m "printing the num"
git: 'commmit' is not a git command. See 'git --help'.

The most similar command is
        commit
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "print the num"
[main 9963fae] print the num
 1 file changed, 15 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/3-printnumber.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 471 bytes | 471.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   6852abf..9963fae  main -> main
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  2-mul.c          main.h      README.md
1-isdigit.c  3-printnumber.c  _putchar.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git add .
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git commit -m "printing"
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Everything up-to-date
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>4-print_most_numbers.c
#include "main.h"

/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void)
{
        int i;

        for (i = '0'; i <= '9'; i++)
        {
                if (i != '2' &&  i != '4')
                {
                        _putchar(i);
                }
        }
        _putchar('\n');
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 4-print_most_numbers.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "the fourth"
[main 36c126f] the fourth
 1 file changed, 19 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/4-print_most_numbers.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 495 bytes | 495.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   9963fae..36c126f  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>5-more_numbers.c
#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void)
{
        int i;
        int h;

        for (h = 0; h <= 9; h++)
        {
                for (i = 0; i <= 14; i++)
                {
                        if (i > 9)
                        {
                                _putchar(i / 10 + '0');
                        }
                        _putchar(i % 10 + '0');
                }
                _putchar('\n');
        }
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 5-more_numbers.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "five more nums"
[main 71884c0] five more nums
 1 file changed, 23 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/5-more_numbers.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 506 bytes | 506.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   36c126f..71884c0  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  2-mul.c          4-print_most_numbers.c  main.h      README.md
1-isdigit.c  3-printnumber.c  5-more_numbers.c        _putchar.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>6-print_line.c
#include "main.h"
/**
 * print_line - prints a line
 *
 * @n: integer
 */
void print_line(int n)
{
        int i;

        for (i = 0; i < n; i++)
        {
                _putchar('_');
        }
        _putchar('\n');
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 6-print_line.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "print lines"
[main 903c75c] print lines
 1 file changed, 16 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/6-print_line.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 468 bytes | 468.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   71884c0..903c75c  main -> main
root@00311de0088f:~/alx-low_level_programming# client_loop: send disconnect: Connection reset by peer

Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  3-printnumber.c         6-print_line.c  README.md
1-isdigit.c  4-print_most_numbers.c  main.h
2-mul.c      5-more_numbers.c        _putchar.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>7-print_diagonal.c
#include "main.h"
/**
 * print_diagonal - prints diagonal
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
        int i;
        int j;

#include "main.h"
/**
 * print_diagonal - prints diagonal
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
        int i;
        int j;

        if (n <= 0)
        {
                _putchar('\n');
        } else
        {
                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < i; j++)
                        {
                                _putchar(' ');
                        }
                        _putchar('\\');
                        _putchar('\n');
                }
        }
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 7-print_diagonal.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 7-print_diagonal.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit - "seven"
error: pathspec '-' did not match any file(s) known to git
error: pathspec 'seven' did not match any file(s) known to git
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Everything up-to-date
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "seven"
[main f3a9728] seven
 1 file changed, 26 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/7-print_diagonal.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 515 bytes | 515.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   903c75c..f3a9728  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  3-printnumber.c         6-print_line.c      _putchar.c
1-isdigit.c  4-print_most_numbers.c  7-print_diagonal.c  README.md
2-mul.c      5-more_numbers.c        main.h
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# rm 7-print_diagonal.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>7-print_diagonal.c
#include "main.h"
/**
 * print_diagonal - prints diagonal
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
        int i;
        int j;

        if (n <= 0)
        {
                _putchar('\n');
        } else
        {
                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < i; j++)
                        {
                                _putchar(' ');
                        }
                        _putchar('\\');
                        _putchar('\n');
                }
        }
}
© 2022 GitHub, Inc.
Terms
Privacy
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 7-print_diagonal.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# client_loop: send disconnect: Connection reset by peer

Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# client_loop: send disconnect: Connection reset by peer

Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  3-printnumber.c         6-print_line.c      _putchar.c
1-isdigit.c  4-print_most_numbers.c  7-print_diagonal.c  README.md
2-mul.c      5-more_numbers.c        main.h
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 7-print_diagonal.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git addclient_loop: send disconnect: Connection reset by peer

Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c  3-printnumber.c         6-print_line.c      _putchar.c
1-isdigit.c  4-print_most_numbers.c  7-print_diagonal.c  README.md
2-mul.c      5-more_numbers.c        main.h
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "seven"
[main c3d664d] seven
 1 file changed, 2 insertions(+), 1 deletion(-)
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 348 bytes | 348.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   f3a9728..c3d664d  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>8-print_square.c
#include "main.h"
/**
 * print_square - prints square
 *
 * @size: integer to set square size
 */
void print_square(int size)
{
        int i;
        int j;

        if (size <= 0)
        {
                _putchar('\n');
        } else
        {
                for (i = 0; i < size; i++)
                {
                        for (j = 0; j < size; j++)
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
                }
        }
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 8-print_square.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "the 8 task"
[main 2238be1] the 8 task
 1 file changed, 26 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/8-print_square.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 520 bytes | 520.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   c3d664d..2238be1  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>9-fizz_buzz.c
#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: a number
 */
int main(void)
{
        int i;

        for (i = 1; i <= 100; i++)
        {
                if (i % 3 == 0 || i % 5 == 0)
                {
                        if (i % 3 == 0)
                        {
                                printf("Fizz");
                        }
                        if (i % 5 == 0)
                        {
                                printf("Buzz");
                        }
                } else
                {
                        printf("%d", i);
                }
                if (i != 100)
                        printf(" ");
        }
        printf("\n");
        return (0);
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 9-fizz_buzz.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>10-print_triangle.c
#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
        int i;
        int j;
        int k;

        if (size <= 0)
        {
                _putchar('\n');
        } else
        {

                for (i = 1; i <= size; i++)
                {
                        for (j = size - i ; j > 0; j--)
                        {
                                _putchar(' ');
                        }
                        for (k = 0; k < i; k++)
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
                }
        }
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 10-print_triangle.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>100-prime_factor.c
#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
        unsigned int a = 2;
        unsigned long n = 612852475143;

        while (a != n)
        {
                if (n % a == 0)
                {
                        n = n / a;
                } else
                {
                        a++;
                }
        }
        printf("%lu\n", n);
        return (0);
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod 100-prime_factor.c
chmod: missing operand after ‘100-prime_factor.c’
Try 'chmod --help' for more information.
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 100-prime_factor.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>101-print_number.c
#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n)
{
        int i;
        int d = 1;
        unsigned int x = n;
        unsigned int y = n;
        int c = 0;

        if (n == 0)
        {
                _putchar('0');
        }
        if (n < 0)
        {
                _putchar('-');
                n = n + 1;
                n = -n;
                y = n;
                x = n;
                x += 1;
                y += 1;
        }

        while (x != 0)
        {
                x = x / 10;
                c++;
        }
        for (i = 1; i < c; i++)
        {
                d *= 10;
        }
        for (i = 0; i < c; i++)
        {
                _putchar(y / d + '0');
                y = y % d;
                d = d / 10;
        }
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 101-print_number.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "final"
[main 02d2099] final
 4 files changed, 136 insertions(+)
 create mode 100755 0x04-more_functions_nested_loops/10-print_triangle.c
 create mode 100755 0x04-more_functions_nested_loops/100-prime_factor.c
 create mode 100755 0x04-more_functions_nested_loops/101-print_number.c
 create mode 100755 0x04-more_functions_nested_loops/9-fizz_buzz.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 2 threads
Compressing objects: 100% (7/7), done.
Writing objects: 100% (7/7), 1.31 KiB | 1.31 MiB/s, done.
Total 7 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   2238be1..02d2099  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# lclient_loop: send disconnect: Connection reset by peer

Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x04-more_functions_nested_loops
0x01-variables_if_else_while
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c          1-isdigit.c             5-more_numbers.c    9-fizz_buzz.c
100-prime_factor.c   2-mul.c                 6-print_line.c      main.h
101-print_number.c   3-printnumber.c         7-print_diagonal.c  _putchar.c
10-print_triangle.c  4-print_most_numbers.c  8-print_square.c    README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# rm 101-print_number.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat>101-print_number.c
#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n)
{
        int i;
        int d = 1;
        unsigned int x = n;
        unsigned int y = n;
        int c = 0;

        if (n == 0)
        {
                _putchar('0');
        }
        if (n < 0)
        {
                _putchar('-');
                n = n + 1;
                n = -n;
                y = n;
                x = n;
                x += 1;
                y += 1;
        }

        while (x != 0)
        {
                x = x / 10;
                c++;
        }
        for (i = 1; i < c; i++)
        {
                d *= 10;
        }
        for (i = 0; i < c; i++)
        {
                _putchar(y / d + '0');
                y = y % d;
                d = d / 10;
        }
}
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 101-print_number.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "final"
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Everything up-to-date
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# ls
0-isupper.c          1-isdigit.c             5-more_numbers.c    9-fizz_buzz.c
100-prime_factor.c   2-mul.c                 6-print_line.c      main.h
101-print_number.c   3-printnumber.c         7-print_diagonal.c  _putchar.c
10-print_triangle.c  4-print_most_numbers.c  8-print_square.c    README.md
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 0-isupper.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 0-isupper.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "retry"
[main e36cd02] retry
 1 file changed, 1 insertion(+)
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 378 bytes | 378.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   02d2099..e36cd02  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x04-more_functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 0-isupper.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# chmod a+x 0-isupper.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git add .
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git commit -m "please"
[main 0ccf9ca] please
 1 file changed, 1 insertion(+)
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 391 bytes | 391.00 KiB/s, done.
Total 4 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/Abenieph/alx-low_level_programming.git
   e36cd02..0ccf9ca  main -> main
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# vim 101-print_number.c
root@00311de0088f:~/alx-low_level_programming/0x04-more_functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# mkdir 0x03-debugging
root@00311de0088f:~/alx-low_level_programming# cd 0x03-debugging/
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cat>main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

#endif
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cat>README.md
this is all about debuging
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cat>0-main.c
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);

        return (0);
}
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# chmod 0-main.c
chmod: missing operand after ‘0-main.c’
Try 'chmod --help' for more information.
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# chmod a+x 0-main.c
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cat>1-main.c
#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
        /*
         * int i;
         */
        printf("Infinite loop incoming :(\n");
        /*
         * i = 0;
         */
        /*
         * while (i < 10)
         * {
         * putchar(i);
         * }
         */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# chmod a+x 1-main.c
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cat>2-largest_number.c

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# vim 2-largest_number.c
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# chmod a+x 2-largest_number.c
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cat>3-print_remaining_days.c

#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {

                if (month > 2)
                {
                        day++;
                }

                        printf("Day of the year: %d\n", day);
                        printf("Remaining days: %d\n", 366 - day);

                }

                else
                {
                        if (month == 2 && day == 60)
                        {
                                printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
                        }

                        else
                        {

                                printf("Day of the year: %d\n", day);
                                printf("Remaining days: %d\n", 365 - day);
                        }
        }
}
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# vim 3-print_remaining_days.c
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# chmod a+x 3-print_remaining_days.c
root@00311de0088f:~/alx-low_level_programming/0x03-debugging# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "all in one"
[main 47702c4] all in one
 6 files changed, 122 insertions(+)
 create mode 100755 0x03-debugging/0-main.c
 create mode 100755 0x03-debugging/1-main.c
 create mode 100755 0x03-debugging/2-largest_number.c
 create mode 100755 0x03-debugging/3-print_remaining_days.c
 create mode 100644 0x03-debugging/README.md
 create mode 100644 0x03-debugging/main.h
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Delta compression using up to 2 threads
Compressing objects: 100% (8/8), done.
Writing objects: 100% (9/9), 1.54 KiB | 1.54 MiB/s, done.
Total 9 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Abenieph/alx-low_level_programming.git
   0ccf9ca..47702c4  main -> main
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x03-debugging
0x01-variables_if_else_while  0x04-more_functions_nested_loops
root@00311de0088f:~/alx-low_level_programming# mkdir 0x02-functions_nested_loops
root@00311de0088f:~/alx-low_level_programming# cd 0x02-functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>README.md
this is nested loop
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>main.h
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
#endif
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops#
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>0-putchar.c
#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
        char ermias[] = "_putchar";

        int c;

        for (c = 0; c < 8; c++)
        {
                _putchar(ermias[c]);
        }
        _putchar('\n');
        return (0);
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 0-putchar.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "putchar"
[main db93502] putchar
 3 files changed, 36 insertions(+)
 create mode 100755 0x02-functions_nested_loops/0-putchar.c
 create mode 100644 0x02-functions_nested_loops/README.md
 create mode 100644 0x02-functions_nested_loops/main.h
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com': client_loop: send disconnect: Connection reset by peer

Black_2@acer MINGW32 /
$ ssh 00311de0088f@00311de0088f.64111cc0.alx-cod.online
00311de0088f@00311de0088f.64111cc0.alx-cod.online's password:
root@00311de0088f:/# cd root
root@00311de0088f:~# ls
0x01_emacs  alx-low_level_programming      school             tmp
0x02_emacs  alx-system_engineering-devops  school_is_amazing  undoing
0x02_vi     new_school                     so_cool
root@00311de0088f:~# cd alx-low_level_programming/
root@00311de0088f:~/alx-low_level_programming# ls
0x00-hello_world              0x03-debugging
0x01-variables_if_else_while  0x04-more_functions_nested_loops
0x02-functions_nested_loops
root@00311de0088f:~/alx-low_level_programming# cd 0x02-functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# ls
0-putchar.c  main.h  README.md
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m
error: switch `m' requires a value
root@00311de0088f:~/alx-low_level_programming# git commit -m "putchar"
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Everything up-to-date
root@00311de0088f:~/alx-low_level_programming# cd 0x02-functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>1-alphabet.c
#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 **/
void print_alphabet(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
                _putchar(c);
        _putchar('\n');
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 1-alphabet.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "alphabet"
[main 2ffe327] alphabet
 1 file changed, 13 insertions(+)
 create mode 100755 0x02-functions_nested_loops/1-alphabet.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 542 bytes | 542.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Abenieph/alx-low_level_programming.git
   db93502..2ffe327  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x02-functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>3-islower.c
#include "main.h"
/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmoda+x 3-islower.c
bash: chmoda+x: command not found
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 3-islower.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>4-isalpha.c
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int c)
{
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 4-isalpha.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>5-sign.c
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: takes in an integer
 * Return: 1 if n is > zero, 0 if n is zero, -1 if n is < zero
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar('0');

root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# vim 5-sign.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 5-sign.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>6-abs.c
#include "main.h"
/**
 * _abs - function that prints the absolute value of a number
 * @n: takes in an integer
 * Return: 1 if > 0, 0 if == 0, positive if negative
 */
int _abs(int n)
{
        if (n < 0)
                return (n * -1);
        return (n);
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 6-abs.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>7-print_last_digit.c
#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
        int ln = n % 10;

        if (n < 0)
                ln = ln * -1;
        _putchar(ln + '0');
        return (ln);
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 7-print_last_digit.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>8-24_hours.c
#include "main.h"
/**
 * jack_bauer - prints every minute of the day 00:00 to 23:59
 * @void - no argument
 */
void jack_bauer(void)
{
        int i, j;

        for (i = 0; i < 24; i++)
        {
                for (j = 0; j < 60; j++)
                {
                        _putchar(i / 10 + '0');
                        _putchar(i % 10 + '0');
                        _putchar(':');
                        _putchar(j / 10 + '0');
                        _putchar(j % 10 + '0');
                        _putchar('\n');
                }
        }
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 8-24_hours.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>9-times_table.c
#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * @void: no argument
 */
void times_table(void)
{
        int i, j, k;

        for (i = 0; i <= 9; i++)
        {
                for (j = 0; j <= 9; j++)
                {
                        k = i * j;
                        if (j == 0)
                        {
                                _putchar(k + '0');
                        }
                        else if (k <= 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(k + '0');
                        }
                        else if (k >= 10)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(k / 10 + '0');
                                _putchar(k % 10 + '0');
                        }
                }
                _putchar('\n');
        }
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 9-times_table.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>10-add.c
#include "main.h"
/**
 * add - function that adds two integers together
 * @a: takes in an integer
 * @b: takes in an integer
 * Return: a + b result
 */
int add(int a, int b)
{
        return (a + b);
}
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# chmod a+x 10-add.c
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cd ..
root@00311de0088f:~/alx-low_level_programming# git add .
root@00311de0088f:~/alx-low_level_programming# git commit -m "from 3 to 10"
[main 827e924] from 3 to 10
 8 files changed, 155 insertions(+)
 create mode 100755 0x02-functions_nested_loops/10-add.c
 create mode 100755 0x02-functions_nested_loops/3-islower.c
 create mode 100755 0x02-functions_nested_loops/4-isalpha.c
 create mode 100755 0x02-functions_nested_loops/5-sign.c
 create mode 100755 0x02-functions_nested_loops/6-abs.c
 create mode 100755 0x02-functions_nested_loops/7-print_last_digit.c
 create mode 100755 0x02-functions_nested_loops/8-24_hours.c
 create mode 100755 0x02-functions_nested_loops/9-times_table.c
root@00311de0088f:~/alx-low_level_programming# git push
Username for 'https://github.com': Abenieph
Password for 'https://Abenieph@github.com':
Enumerating objects: 13, done.
Counting objects: 100% (13/13), done.
Delta compression using up to 2 threads
Compressing objects: 100% (11/11), done.
Writing objects: 100% (11/11), 2.16 KiB | 2.16 MiB/s, done.
Total 11 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Abenieph/alx-low_level_programming.git
   2ffe327..827e924  main -> main
root@00311de0088f:~/alx-low_level_programming# cd 0x02-functions_nested_loops/
root@00311de0088f:~/alx-low_level_programming/0x02-functions_nested_loops# cat>11-print_to_98.c
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: takes in an integer
 *
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
