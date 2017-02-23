/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef TEXTURE_LAYER_MANAGER_H
#define TEXTURE_LAYER_MANAGER_H

#include "texturelayer.h"

/****************************************************************************
 This class manages all TextureLayers.
 ***************************************************************************/

class TextureLayerManager
{
    typedef std::vector<TextureLayer*> TextureLayers;

    public:
        TextureLayerManager(void);
        ~TextureLayerManager(void);

        /* Return a TextureLayer, which is either created or it is already available.
         */
        TextureLayer* createOrRetrieveTextureLayer (const Ogre::IdString& datablockName,
                                                    Ogre::PbsTextureTypes textureType,
                                                    const Ogre::String& textureFileName);

        /* Because the TextureLayer objects are managed by the TextureLayerManager,
         * they also need to be deleted by the TextureLayerManager
         */
        void removeAndDeleteTextureLayer (TextureLayer* textureLayer);

        /* Because the TextureLayer objects are managed by the TextureLayerManager,
         * they also need to be deleted by the TextureLayerManager
         */
        void removeAndDeleteAllTextureLayers (void);

        /* Return the pointer the TextureLayers
         */
        TextureLayers* getTextureLayers (void);

        /* Return the pointer to a specific TextureLayer
         */
        TextureLayer* getTextureLayer (Ogre::PbsTextureTypes textureType);


    private:
        TextureLayers mTextureLayers;
};

#endif
