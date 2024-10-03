{ pkgs, ... }: {

  # Which nixpkgs channel to use.
  channel = "stable-23.11"; # or "unstable"
  
  # Use https://search.nixos.org/packages to find packages
  packages = [
    pkgs.nodejs_18
    pkgs.gcc  # This line adds g++
    pkgs.gcc
  ];
  
  # ... (rest of your configuration) ...
}
