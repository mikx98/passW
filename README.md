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

### run.sh
run to find out the new freshly generated password

### find.sh
run to re-solve the actual password. this is a long journey,
so be patient please - without modifications to the
.conf file it usually **lasts ~30 minutes**

### seed/.conf
usually it's safe to leave as is, if you want to adjust
the time it lasts to re-solve the pass, modify the
second number on the first line (as a simple guideline
let's assume that 10 times that number will cause
find.sh run 10 times longer

### seed/.actual
data about your lastly generated password, **DO NOT REMOVE** or
the password will be lost
