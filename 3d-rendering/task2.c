void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    // Normalized pixel coordinates (from 0 to 1)
    vec2 uv = fragCoord/iResolution.xy;
    vec3 red = vec3(255, 0, 0);
    vec3 black = vec3(0, 0, 0);
    
    //black to red transition
    vec3 col = vec3(0.5+0.5, 0, 0)*sin(iTime+uv.xyx+vec3(0,0,0));
    
    // Output to screen
    fragColor = vec4(col,1.0);
}