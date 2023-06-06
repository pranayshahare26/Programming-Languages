#!/usr/bin/perl
my $lowercase = "abcdefghijklmnopqrstuvwxyz";
my $uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
my $numbers = "0123456789";
my $special_chars = "!@#$%^&*()-=_+[]{};:,.<>?";
sub generate_password 
{
    my ($length, $chars) = @_;
    my $password = "";
    for (1..$length) 
    {
        $password .= substr($chars, int(rand(length($chars))), 1);
    }
    return $password;
}
while (1) 
{
    print "\nEnter the password length: ";
    my $length = <STDIN>;
    chomp($length);
    print "Enter the character set (l for lowercase, u for uppercase, n for numbers, s for special characters): ";
    my $chars = <STDIN>;
    chomp($chars);
    my $char_set = "";
    if ($chars =~ /l/) 
    {
        $char_set .= $lowercase;
    }
    if ($chars =~ /u/) 
    {
        $char_set .= $uppercase;
    }
    if ($chars =~ /n/) 
    {
        $char_set .= $numbers;
    }
    if ($chars =~ /s/) 
    {
        $char_set .= $special_chars;
    }
    print "Enter the number of passwords to generate: ";
    my $count = <STDIN>;
    chomp($count);
    for (1..$count) 
    {
        my $password = generate_password($length, $char_set);
        print "Password: $password\n";
    }
    print "Do you want to generate more passwords? (y/n): ";
    my $choice = <STDIN>;
    chomp($choice);
    if ($choice =~ /n/i) 
    {
        exit;
    }
}