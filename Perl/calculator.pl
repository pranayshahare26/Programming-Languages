#!/usr/bin/perl

use strict;
use warnings;

sub main_menu 
{
    print "\n--- Main Menu ---\n";
    print "1. Addition\n";
    print "2. Subtraction\n";
    print "3. Multiplication\n";
    print "4. Division\n";
    print "5. Exit\n";
    print "Enter your choice: ";
}

sub addition 
{
    print "\nEnter the first number: ";
    my $num1 = <STDIN>;
    chomp($num1);
    print "Enter the second number: ";
    my $num2 = <STDIN>;
    chomp($num2);
    my $result = $num1 + $num2;
    print "$num1 + $num2 = $result\n";
}

sub subtraction 
{
    print "\nEnter the first number: ";
    my $num1 = <STDIN>;
    chomp($num1);
    print "Enter the second number: ";
    my $num2 = <STDIN>;
    chomp($num2);
    my $result = $num1 - $num2;
    print "$num1 - $num2 = $result\n";
}

sub multiplication 
{
    print "\nEnter the first number: ";
    my $num1 = <STDIN>;
    chomp($num1);
    print "Enter the second number: ";
    my $num2 = <STDIN>;
    chomp($num2);
    my $result = $num1 * $num2;
    print "$num1 * $num2 = $result\n";
}

sub division 
{
    print "\nEnter the numerator: ";
    my $num1 = <STDIN>;
    chomp($num1);
    print "Enter the denominator: ";
    my $num2 = <STDIN>;
    chomp($num2);
    if ($num2 == 0) {
        print "Error: division by zero\n";
    } else {
        my $result = $num1 / $num2;
        print "$num1 / $num2 = $result\n";
    }
}

while (1) 
{
    main_menu();
    my $choice = <STDIN>;
    chomp($choice);
    if ($choice == 1) 
    {
        addition();
    } elsif ($choice == 2) 
    {
        subtraction();
    } elsif ($choice == 3) 
    {
        multiplication();
    } elsif ($choice == 4) 
    {
        division();
    } elsif ($choice == 5) 
    {
        last;
    } else 
    {
        print "Invalid choice\n";
    }
}
