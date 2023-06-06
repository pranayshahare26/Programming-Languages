#!/usr/bin/perl -w
use strict;

my @ids = qw(AAA bbbb Ccc ddD EEE);
my @upper;

foreach my $id (@ids) {
       	if ($id eq uc($id))
	{
	    push @upper, $id;
    }
}
	print "Upper case words: @upper\n";
