# Conda setup (automatically generated, do not modify within this block)
# >>> conda initialize >>>
__conda_setup="$('/Users/jiaohailong/opt/anaconda3/bin/conda' 'shell.zsh' 'hook' 2>/dev/null)"
if [ $? -eq 0 ]; then
    eval "$__conda_setup"
else
    if [ -f "/Users/jiaohailong/opt/anaconda3/etc/profile.d/conda.sh" ]; then
        . "/Users/jiaohailong/opt/anaconda3/etc/profile.d/conda.sh"
    else
        export PATH="/Users/jiaohailong/opt/anaconda3/bin:$PATH"
    fi
fi
unset __conda_setup
# <<< conda initialize <<<

# Update PATH for Anaconda binaries if needed
export PATH="/Users/jiaohailong/anaconda3/bin:$PATH"

# libsigc++ paths
export LDFLAGS="-L/opt/homebrew/Cellar/libsigc++/3.6.0/lib"
export CPPFLAGS="-I/opt/homebrew/Cellar/libsigc++/3.6.0/include"

# Homebrew paths
export PATH="/opt/homebrew/bin:/opt/homebrew/sbin:$PATH"
export HOMEBREW_BOTTLE_DOMAIN="https://mirrors.tuna.tsinghua.edu.cn/homebrew-bottles"
