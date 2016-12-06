# passW
a bash / C++ script allowing you to control your time on websites by controlling (generating and re-finding) the password

## about
Tired of being too often on social sites (fb, twitter, instagram, etc)?
Imagine you didn't know your own password. Would it suffice? Well, of course.
But there's a problem.. I suppose, you want to know the password .. but only
sometimes, in cases you **REALLY** want to go there, not just because you
don't know what to do.

**passW** is here for you: it generates a password for you (one you wouldn't remember),
and keeps some data about it. Out of this data it's possible to recover the password,
but it lasts some time (~30 min (*adjustable*), it's a complicated proccess). Hence
you run the re-solving algorithm just when you have some deeper motivation to
find out the pass. Good luck!

##### friendly suggestion
I know, I know. You are too clever for this to work. You think
that you can just click 'I have forgotten my password' and
you wouldn't have to wait. Well ... consider changing your
email address for recovery to something passW-controlled
as well.

Need to set another email for that email? Setup 2 passW-controlled
ones and link them together. There's just no way to go about it!

### ./run.sh [fb]
run to find out the new freshly generated password (password named as 'fb')

### ./find.sh [fb]
run to re-solve the actual password (named as 'fb'). this is a long journey,
so be patient please - without modifications to the
.conf file it usually **lasts ~30 minutes**

### seed/.conf
usually it's safe to leave as is, if you want to adjust
the time it lasts to re-solve the pass, modify the
second number on the first line (as a simple guideline
let's assume that 10 times that number will cause
find.sh run 10 times longer

this file can be modified after each run.sh, hence the
re-solving time can vary password to password

### data/
contains data about your passwords, **DO NOT REMOVE** or
the passwords will be lost forever
