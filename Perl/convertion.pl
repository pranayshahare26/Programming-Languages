# #!/usr/bin/perl


# print "Welcome to the temperature converter!\n";

# print "Enter the temperature: ";
# chomp(my $temp = <STDIN>);
# print "Is the temperature in Celsius or Fahrenheit? (C/F): ";
# chomp(my $scale = <STDIN>);

# if ($scale eq "C" || $scale eq "c") 
# {
#     my $fahrenheit = ($temp * 9/5) + 32;
#     print "$temp Celsius is $fahrenheit Fahrenheit.\n";
# } elsif ($scale eq "F" || $scale eq "f") 
# {
#     my $celsius = ($temp - 32) * 5/9;
#     print "$temp Fahrenheit is $celsius Celsius.\n";
# } else 
# {
#     print "Invalid scale entered. Please enter 'C' or 'F'.\n";
# }


# OR

#!/usr/bin/perl
sub celsius_to_fahrenheit 
{
    my ($celsius) = @_;
    my $fahrenheit = ($celsius * 9/5) + 32;
    return $fahrenheit;
}
sub fahrenheit_to_celsius 
{
    my ($fahrenheit) = @_;
    my $celsius = ($fahrenheit - 32) * 5/9;
    return $celsius;
}
while (1) 
{
    print "\nEnter the temperature: ";
    my $temp = <STDIN>;
    chomp($temp);
    print "Enter the scale (C for Celsius, F for Fahrenheit): ";
    my $scale = <STDIN>;
    chomp($scale);
    my $converted_temp = 0;
    if ($scale =~ /C/i) 
    {
        $converted_temp = celsius_to_fahrenheit($temp);
        print "$temp°C is $converted_temp°F\n";
    } elsif ($scale =~ /F/i) 
    {
        $converted_temp = fahrenheit_to_celsius($temp);
        print "$temp°F is $converted_temp°C\n";
    } else 
    {
        print "Invalid choice! Please try again.\n";
    }
    print "Do you want to convert another temperature? (y/n): ";
    my $choice = <STDIN>;
    chomp($choice);
    if ($choice =~ /n/i) 
    {
        exit;
    }
}